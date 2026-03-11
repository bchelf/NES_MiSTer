Session Summary                                                               
                                                                                
  Critical Bug Fixed                                                            
                                                                                
  The NES simulation was rendering a solid blue screen because of a CHR ROM
  routing bug. nes_core_top.sv has two separate chr_rom arrays:
  1. nes_core_top__DOT__chr_rom — correctly preloaded from the ROM file by
  preload_rom()
  2. An internal chr_rom inside cart_top_sim.sv — never loaded, stays all-zeros

  When has_chr_dout=1 (mapper-0 with CHR ROM), the PPU used the cart's empty
  array via chr_from_ppu_mapper, making every tile transparent → solid blue.
  Fix: changed cart_top_sim.sv to set chr_aout = {2'b10, 6'h00, chr_ain} with
  has_chr_dout=0, routing reads through ppumem_din which uses the
  correctly-loaded nes_core_top__DOT__chr_rom. The SMB1 title screen now renders
   correctly.

  Current State

  - SMB1 title screen renders properly (frame PNGs confirmed)
  - Sprite 0 hit fires correctly each frame (val=$40 seen in $2002)
  - NMI fires every frame (NMI re-enabled at $8181 each frame)
  - Blocker: $0772 (OperMode_Task) stuck at 3 through 200+ frames. The title
  screen task 3 requires Start button input or a timer expiry to advance. Start
  button injection is in place for frames 33–42 (joy1_buttons |= 0x08), but
  hasn't taken effect yet.

  Next Step

  Verify that the NMI handler's joypad polling code (~$8185) is actually reading
   and latching the Start button during frames 33–42. Check joy-rd trace output
  for those frames to see if $4016 reads are happening and whether the
  joy1_buttons=0x08 value is being seen.
