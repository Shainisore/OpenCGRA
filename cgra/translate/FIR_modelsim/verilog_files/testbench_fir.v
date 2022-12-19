typedef struct packed {
  logic [5:0] ctrl ;
  logic [0:0] predicate ;
  logic [3:0][2:0] fu_in ;
  logic [7:0][2:0] outport ;
  logic [5:0][0:0] predicate_in ;
} CGRAConfig_6_4_6_8;

// PyMTL BitStruct CGRAData_32_1_1 Definition
// At BitStruct CGRAData_32_1_1
typedef struct packed {
  logic [31:0] payload ;
  logic [0:0] predicate ;
  logic [0:0] bypass ;
} CGRAData_32_1_1;

// PyMTL BitStruct CGRAData_1_1 Definition
// At BitStruct CGRAData_1_1
typedef struct packed {
  logic [0:0] payload ;
  logic [0:0] predicate ;
} CGRAData_1_1;




module testbench_fir;

  logic [0:0] clk;
  logic [0:0] reset;
  logic [0:0] recv_waddr__en [0:15];
  logic [2:0] recv_waddr__msg [0:15];
  logic [0:0] recv_waddr__rdy [0:15];
  logic [0:0] recv_wopt__en [0:15];
  CGRAConfig_6_4_6_8 recv_wopt__msg [0:15];
  logic [0:0] recv_wopt__rdy [0:15];

  CGRARTL__1d39f2e940519f92 dut (
	  .clk(clk),
	  .reset(reset),
	  .recv_waddr__en(recv_waddr__en),
	  .recv_waddr__msg(recv_waddr__msg),
	  .recv_waddr__rdy(recv_waddr__rdy),
	  .recv_wopt__en(recv_wopt__en),
	  .recv_wopt__msg(recv_wopt__msg),
	  .recv_wopt__rdy(recv_wopt__rdy)
  );

 initial begin
    reset <= 1; #10;
    reset <= 0; #10;
    reset <= 1;

    //load data
    //{payload, predicate, bypass}
    for ( int i = 0; i < 100; i += 1 ) begin
      dut.data_mem.reg_file.regs[i] = {32'h5, 1'h1, 1'h0};
    end

    //load control signal
    //load default(NOP)
    for ( int i = 0; i < 8; i += 1 ) begin
      dut.tile__0.ctrl_mem.reg_file.regs[i]  = {6'h1, 1'd0, {3'd0, 3'd0, 3'd0, 3'd0}, {3'd0, 3'd0, 3'd0, 3'd0, 3'd0, 3'd0, 3'd0, 3'd0}, 6'd0};
      dut.tile__1.ctrl_mem.reg_file.regs[i]  = {6'h1, 1'd0, {3'd0, 3'd0, 3'd0, 3'd0}, {3'd0, 3'd0, 3'd0, 3'd0, 3'd0, 3'd0, 3'd0, 3'd0}, 6'd0};
      dut.tile__2.ctrl_mem.reg_file.regs[i]  = {6'h1, 1'd0, {3'd0, 3'd0, 3'd0, 3'd0}, {3'd0, 3'd0, 3'd0, 3'd0, 3'd0, 3'd0, 3'd0, 3'd0}, 6'd0};
      dut.tile__3.ctrl_mem.reg_file.regs[i]  = {6'h1, 1'd0, {3'd0, 3'd0, 3'd0, 3'd0}, {3'd0, 3'd0, 3'd0, 3'd0, 3'd0, 3'd0, 3'd0, 3'd0}, 6'd0};
      dut.tile__4.ctrl_mem.reg_file.regs[i]  = {6'h1, 1'd0, {3'd0, 3'd0, 3'd0, 3'd0}, {3'd0, 3'd0, 3'd0, 3'd0, 3'd0, 3'd0, 3'd0, 3'd0}, 6'd0};
      dut.tile__5.ctrl_mem.reg_file.regs[i]  = {6'h1, 1'd0, {3'd0, 3'd0, 3'd0, 3'd0}, {3'd0, 3'd0, 3'd0, 3'd0, 3'd0, 3'd0, 3'd0, 3'd0}, 6'd0};
      dut.tile__6.ctrl_mem.reg_file.regs[i]  = {6'h1, 1'd0, {3'd0, 3'd0, 3'd0, 3'd0}, {3'd0, 3'd0, 3'd0, 3'd0, 3'd0, 3'd0, 3'd0, 3'd0}, 6'd0};
      dut.tile__7.ctrl_mem.reg_file.regs[i]  = {6'h1, 1'd0, {3'd0, 3'd0, 3'd0, 3'd0}, {3'd0, 3'd0, 3'd0, 3'd0, 3'd0, 3'd0, 3'd0, 3'd0}, 6'd0};
      dut.tile__8.ctrl_mem.reg_file.regs[i]  = {6'h1, 1'd0, {3'd0, 3'd0, 3'd0, 3'd0}, {3'd0, 3'd0, 3'd0, 3'd0, 3'd0, 3'd0, 3'd0, 3'd0}, 6'd0};
      dut.tile__9.ctrl_mem.reg_file.regs[i]  = {6'h1, 1'd0, {3'd0, 3'd0, 3'd0, 3'd0}, {3'd0, 3'd0, 3'd0, 3'd0, 3'd0, 3'd0, 3'd0, 3'd0}, 6'd0};
      dut.tile__10.ctrl_mem.reg_file.regs[i] = {6'h1, 1'd0, {3'd0, 3'd0, 3'd0, 3'd0}, {3'd0, 3'd0, 3'd0, 3'd0, 3'd0, 3'd0, 3'd0, 3'd0}, 6'd0};
      dut.tile__11.ctrl_mem.reg_file.regs[i] = {6'h1, 1'd0, {3'd0, 3'd0, 3'd0, 3'd0}, {3'd0, 3'd0, 3'd0, 3'd0, 3'd0, 3'd0, 3'd0, 3'd0}, 6'd0};
      dut.tile__12.ctrl_mem.reg_file.regs[i] = {6'h1, 1'd0, {3'd0, 3'd0, 3'd0, 3'd0}, {3'd0, 3'd0, 3'd0, 3'd0, 3'd0, 3'd0, 3'd0, 3'd0}, 6'd0};
      dut.tile__13.ctrl_mem.reg_file.regs[i] = {6'h1, 1'd0, {3'd0, 3'd0, 3'd0, 3'd0}, {3'd0, 3'd0, 3'd0, 3'd0, 3'd0, 3'd0, 3'd0, 3'd0}, 6'd0};
      dut.tile__14.ctrl_mem.reg_file.regs[i] = {6'h1, 1'd0, {3'd0, 3'd0, 3'd0, 3'd0}, {3'd0, 3'd0, 3'd0, 3'd0, 3'd0, 3'd0, 3'd0, 3'd0}, 6'd0};
      dut.tile__15.ctrl_mem.reg_file.regs[i] = {6'h1, 1'd0, {3'd0, 3'd0, 3'd0, 3'd0}, {3'd0, 3'd0, 3'd0, 3'd0, 3'd0, 3'd0, 3'd0, 3'd0}, 6'd0};
    end    

    //circle 0:
    dut.tile__5.ctrl_mem.reg_file.regs[0]   = {6'h01, 1'd0, {3'd0, 3'd0, 3'd0, 3'd0}, {3'd4, 3'd4, 3'd3, 3'd0, 3'd0, 3'd0, 3'd0, 3'd4}, 6'd0};
    dut.tile__6.ctrl_mem.reg_file.regs[0]   = {6'h20, 1'd1, {3'd0, 3'd0, 3'd2, 3'd1}, {3'd0, 3'd0, 3'd0, 3'd5, 3'd0, 3'd5, 3'd0, 3'd0}, 6'd0};
    dut.tile__9.ctrl_mem.reg_file.regs[0]   = {6'h02, 1'd0, {3'd0, 3'd0, 3'd2, 3'd1}, {3'd0, 3'd0, 3'd0, 3'd0, 3'd5, 3'd0, 3'd0, 3'd0}, 6'd0};
    dut.tile__10.ctrl_mem.reg_file.regs[0]  = {6'h01, 1'd0, {3'd0, 3'd0, 3'd0, 3'd0}, {3'd0, 3'd0, 3'd0, 3'd3, 3'd0, 3'd0, 3'd0, 3'd0}, 6'd0};

    // //circle 1:
    // dut.tile__4.ctrl_mem.reg_file.regs[1]   = {6'h01, 1'd0, {3'd0, 3'd0, 3'd0, 3'd0}, {3'd0, 3'd0, 3'd0, 3'd0, 3'd4, 3'd0, 3'd0, 3'd0}, 6'd0};
    // dut.tile__5.ctrl_mem.reg_file.regs[1]   = {6'h19, 1'd0, {3'd3, 3'd0, 3'd0, 3'd0}, {3'd0, 3'd0, 3'd5, 3'd0, 3'd0, 3'd0, 3'd0, 3'd0}, 6'd0};
    // dut.tile__6.ctrl_mem.reg_file.regs[1]   = {6'h19, 1'd0, {3'd1, 3'd2, 3'd0, 3'd0}, {3'd5, 3'd0, 3'd0, 3'd0, 3'd5, 3'd0, 3'd0, 3'd0}, 6'd0};
    // dut.tile__9.ctrl_mem.reg_file.regs[1]   = {6'h01, 1'd0, {3'd0, 3'd0, 3'd0, 3'd0}, {3'd0, 3'd0, 3'd0, 3'd0, 3'd0, 3'd4, 3'd2, 3'd0}, 6'd0};
    // dut.tile__10.ctrl_mem.reg_file.regs[1]  = {6'h20, 1'd1, {3'd1, 3'd0, 3'd0, 3'd0}, {3'd0, 3'd0, 3'd5, 3'd0, 3'd2, 3'd0, 3'd0, 3'd0}, 6'd0};

    // //circle 2:
    // dut.tile__4.ctrl_mem.reg_file.regs[2]   = {6'h0c, 1'd0, {3'd1, 3'd2, 3'd0, 3'd0}, {3'd0, 3'd0, 3'd0, 3'd5, 3'd0, 3'd0, 3'd0, 3'd0}, 6'd0};
    // dut.tile__5.ctrl_mem.reg_file.regs[2]   = {6'h01, 1'd0, {3'd0, 3'd0, 3'd0, 3'd0}, {3'd0, 3'd0, 3'd0, 3'd0, 3'd3, 3'd0, 3'd0, 3'd0}, 6'd0};
    // dut.tile__6.ctrl_mem.reg_file.regs[2]   = {6'h01, 1'd0, {3'd0, 3'd0, 3'd0, 3'd0}, {3'd0, 3'd0, 3'd0, 3'd0, 3'd0, 3'd1, 3'd0, 3'd0}, 6'd0};
    // dut.tile__8.ctrl_mem.reg_file.regs[2]   = {6'h01, 1'd0, {3'd0, 3'd0, 3'd0, 3'd0}, {3'd0, 3'd0, 3'd0, 3'd0, 3'd4, 3'd0, 3'd0, 3'd0}, 6'd0};
    // dut.tile__9.ctrl_mem.reg_file.regs[2]   = {6'h19, 1'd0, {3'd3, 3'd0, 3'd0, 3'd0}, {3'd0, 3'd0, 3'd5, 3'd0, 3'd0, 3'd0, 3'd0, 3'd0}, 6'd0};
    // dut.tile__10.ctrl_mem.reg_file.regs[2]  = {6'h21, 1'd0, {3'd1, 3'd2, 3'd0, 3'd0}, {3'd0, 3'd5, 3'd0, 3'd0, 3'd0, 3'd0, 3'd0, 3'd0}, 6'd0};

    // //circle 3:
    // dut.tile__4.ctrl_mem.reg_file.regs[3]   = {6'h01, 1'd0, {3'd0, 3'd0, 3'd0, 3'd0}, {3'd0, 3'd0, 3'd0, 3'd1, 3'd0, 3'd0, 3'd0, 3'd0}, 6'd0};
    // dut.tile__5.ctrl_mem.reg_file.regs[3]   = {6'h07, 1'd0, {3'd1, 3'd2, 3'd0, 3'd0}, {3'd5, 3'd0, 3'd0, 3'd0, 3'd0, 3'd0, 3'd0, 3'd0}, 6'd0};
    // dut.tile__6.ctrl_mem.reg_file.regs[3]   = {6'h10, 1'd0, {3'd2, 3'd0, 3'd0, 3'd0}, {3'd5, 3'd0, 3'd0, 3'd0, 3'd0, 3'd0, 3'd0, 3'd0}, 6'b000010};
    // dut.tile__8.ctrl_mem.reg_file.regs[3]   = {6'h0c, 1'd0, {3'd1, 3'd2, 3'd0, 3'd0}, {3'd0, 3'd5, 3'd0, 3'd0, 3'd0, 3'd0, 3'd0, 3'd0}, 6'd0};
    // dut.tile__9.ctrl_mem.reg_file.regs[3]   = {6'h01, 1'd0, {3'd0, 3'd0, 3'd0, 3'd0}, {3'd0, 3'd0, 3'd0, 3'd0, 3'd2, 3'd0, 3'd0, 3'd0}, 6'd0};
    // dut.tile__10.ctrl_mem.reg_file.regs[3]  = {6'h01, 1'd0, {3'd0, 3'd0, 3'd0, 3'd0}, {3'd0, 3'd0, 3'd0, 3'd0, 3'd0, 3'd0, 3'd0, 3'd0}, 6'b010000};

    dut.tile__0.ctrl_mem.reg_file__raddr[0] = 3'd7;
    dut.tile__1.ctrl_mem.reg_file__raddr[0] = 3'd7;
    dut.tile__2.ctrl_mem.reg_file__raddr[0] = 3'd7;
    dut.tile__3.ctrl_mem.reg_file__raddr[0] = 3'd7;
    dut.tile__4.ctrl_mem.reg_file__raddr[0] = 3'd7;
    dut.tile__5.ctrl_mem.reg_file__raddr[0] = 3'd7;
    dut.tile__6.ctrl_mem.reg_file__raddr[0] = 3'd7;
    dut.tile__7.ctrl_mem.reg_file__raddr[0] = 3'd7;
    dut.tile__8.ctrl_mem.reg_file__raddr[0] = 3'd7;
    dut.tile__9.ctrl_mem.reg_file__raddr[0] = 3'd7;
    dut.tile__10.ctrl_mem.reg_file__raddr[0] = 3'd7;
    dut.tile__11.ctrl_mem.reg_file__raddr[0] = 3'd7;
    dut.tile__12.ctrl_mem.reg_file__raddr[0] = 3'd7;
    dut.tile__13.ctrl_mem.reg_file__raddr[0] = 3'd7;
    dut.tile__14.ctrl_mem.reg_file__raddr[0] = 3'd7;
    dut.tile__15.ctrl_mem.reg_file__raddr[0] = 3'd7;
 end


//  initial begin
//     reset <= 1; #10;
//     reset <= 0; #10;
//     reset <= 1;
//     for ( int i = 0; i < 16; i += 1 ) begin
//       recv_waddr__en[i] = 1'd1;
//       recv_waddr__msg[i] = 2'd0;
//     end
    

  
  always
    begin
      clk <= 1; #5;
      clk <= 0; #5;
    end

endmodule : testbench_fir
