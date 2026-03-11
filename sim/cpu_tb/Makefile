VERILATOR ?= verilator
OBJ_DIR   ?= obj_dir
BIN       ?= sim_cpu_tb

all: $(BIN)

$(BIN): cpu_wrapper_tb.sv ../verilator/t65_arlet_wrapper.sv ../third_party/verilog-6502/cpu.v ../third_party/verilog-6502/ALU.v sim_cpu_main.cpp
	$(VERILATOR) -cc --exe --build -O2 -Wall --trace --timing \
		-Wno-fatal -Wno-DECLFILENAME -Wno-UNUSEDSIGNAL \
		cpu_wrapper_tb.sv ../verilator/t65_arlet_wrapper.sv \
		../third_party/verilog-6502/cpu.v ../third_party/verilog-6502/ALU.v \
		sim_cpu_main.cpp --top-module cpu_wrapper_tb --Mdir $(OBJ_DIR)
	cp $(OBJ_DIR)/Vcpu_wrapper_tb $(BIN)

clean:
	rm -rf $(OBJ_DIR) $(BIN)

.PHONY: all clean
