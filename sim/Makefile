TOP          ?= nes_core_top
VERILATOR    ?= verilator
OBJ_DIR      ?= obj_dir
SIM_BIN      ?= sim_nes
TRACE        ?= 0
SIM_OPT      ?= 3
SIM_DEBUG    ?= 0
SIM_HUD      ?= 0
BUILD_ID_V   := $(OBJ_DIR)/build_id.v
BUILD_CFG    := $(OBJ_DIR)/build.cfg
VERILATE_STAMP := $(OBJ_DIR)/.verilate.stamp

SDL_CFLAGS   := $(shell sdl2-config --cflags 2>/dev/null)
SDL_LIBS     := $(shell sdl2-config --libs 2>/dev/null)

# NOTE:
# This is intentionally isolated development harness code under sim/.
# We compile a lower-level NES wrapper for desktop simulation (not MiSTer top).
RTL_AUTO_ALL := $(shell find ../rtl -type f \( -name '*.sv' -o -name '*.v' \) | sort)
RTL_AUTO := $(filter-out \
	../rtl/cart.sv \
	../rtl/mappers/FDS.sv \
	../rtl/mappers/JYCompany.sv \
	../rtl/mappers/MMC1.sv \
	../rtl/mappers/MMC2.sv \
	../rtl/mappers/MMC3.sv \
	../rtl/mappers/MMC5.sv \
	../rtl/mappers/Namco.sv \
	../rtl/mappers/Sachen.sv \
	../rtl/mappers/Sunsoft.sv \
	../rtl/mappers/VRC.sv \
	../rtl/mappers/generic.sv \
	../rtl/mappers/misc.sv \
	../rtl/pll.v \
	../rtl/pll/pll_0002.v \
	../rtl/sdram.sv \
	,$(RTL_AUTO_ALL))

RTL_SRCS := \
	verilator/nes_core_top.sv \
	verilator/t65_arlet_wrapper.sv \
	third_party/t65/T65_synth.v \
	verilator/cart_top_sim.sv \
	$(RTL_AUTO) \
	verilator/stubs_vhdl.sv

CPP_SRCS := \
	verilator/sim_main.cpp \
	verilator/video.cpp \
	verilator/input.cpp \
	verilator/frame_dump.cpp \
	verilator/rom_loader.cpp
CPP_HDRS := $(wildcard verilator/*.h)

VERILATOR_FLAGS := -cc --exe --build -O$(SIM_OPT) -Wall --bbox-unsup --top-module $(TOP) -I.. -I$(OBJ_DIR) -Wno-ASSIGNIN -Wno-PROCASSWIRE -Wno-fatal
VERILATOR_FLAGS += -GDEBUG=$(SIM_DEBUG)
VERILATOR_FLAGS += -GHUD=$(SIM_HUD)
ifeq ($(TRACE),1)
VERILATOR_FLAGS += --trace
endif

all: $(SIM_BIN)

# Any change in simulation C++/headers, simulation wrappers/stubs, RTL sources
# in the Verilator command line, or this Makefile invalidates this stamp and
# reruns Verilator (+ C++ compile/link through --build).
VERILATOR_INPUTS := $(RTL_SRCS) $(CPP_SRCS) $(CPP_HDRS) Makefile $(BUILD_ID_V) $(BUILD_CFG)

$(BUILD_ID_V):
	@mkdir -p $(OBJ_DIR)
	@printf '`define BUILD_DATE "%s"\n' "$$(date +%y%m%d)" > $(BUILD_ID_V)

$(BUILD_CFG): FORCE
	@mkdir -p $(OBJ_DIR)
	@printf "TRACE=%s\nSIM_OPT=%s\nSIM_DEBUG=%s\nSIM_HUD=%s\n" "$(TRACE)" "$(SIM_OPT)" "$(SIM_DEBUG)" "$(SIM_HUD)" > $(BUILD_CFG).tmp
	@cmp -s $(BUILD_CFG).tmp $(BUILD_CFG) 2>/dev/null || mv $(BUILD_CFG).tmp $(BUILD_CFG)
	@rm -f $(BUILD_CFG).tmp

$(VERILATE_STAMP): $(VERILATOR_INPUTS)
			$(VERILATOR) $(VERILATOR_FLAGS) \
				$(RTL_SRCS) $(CPP_SRCS) \
				-CFLAGS "-std=c++17 -O$(SIM_OPT) -DNDEBUG $(SDL_CFLAGS)" \
				-LDFLAGS "$(SDL_LIBS)" \
				-MAKEFLAGS "OPT_FAST=-O3" \
				--Mdir $(OBJ_DIR)
		@touch $(VERILATE_STAMP)

# Copy the latest built model to a stable binary name used by developers.
$(SIM_BIN): $(VERILATE_STAMP)
	cp $(OBJ_DIR)/V$(TOP) $(SIM_BIN)

run: $(SIM_BIN)
	./$(SIM_BIN)

fast: $(SIM_BIN)

debug: $(SIM_BIN)

debug-signals:
	$(MAKE) SIM_DEBUG=1

hud:
	$(MAKE) SIM_HUD=1

clean:
	rm -rf $(OBJ_DIR) $(SIM_BIN) frame_*.png debug_frame_*.png

.PHONY: all run fast debug debug-signals hud clean FORCE
