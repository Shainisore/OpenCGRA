#=========================================================================
# VCGRARTL__1d39f2e940519f92_v.py
#=========================================================================
"""Provide a template of PyMTL wrapper to import verilated models.

This wrapper makes a Verilator-generated C++ model appear as if it were a
normal PyMTL model. This template is based on PyMTL v2.
"""

import os

from cffi  import FFI

from pymtl3.datatypes import *
from pymtl3.dsl import Component, connect, InPort, OutPort, Wire, M, U, RD, WR

# def full_vector( wire, signal ):

#   def to_string( num, nbits ):
#     ndigits = (nbits-1)//4+1
#     return "{0:#0{1}x}".format( num, ndigits+2 )

#   nbits = wire.nbits
#   if nbits <= 64:
#     return to_string( signal[0], nbits )
#   else:
#     ret = ""
#     num_elements = (nbits-1)//32+1
#     for idx in range(num_elements):
#       _nbits = 32 if idx != num_elements-1 else nbits%32
#       ret = to_string( signal[idx], _nbits )[2:] + ret
#     return "0x" + ret

#-------------------------------------------------------------------------
# CGRARTL__1d39f2e940519f92
#-------------------------------------------------------------------------

class CGRARTL__1d39f2e940519f92( Component ):
  id_ = 0

  def __init__( s, *args, **kwargs ):
    s._finalization_count = 0

    # initialize FFI, define the exposed interface
    s.ffi = FFI()
    s.ffi.cdef("""
      typedef struct {

        // Exposed port interface
        unsigned char * clk;        
        unsigned char * reset;        
        unsigned char * recv_waddr___05Fen[16];        
        unsigned char * recv_waddr___05Fmsg[16];        
        unsigned char * recv_waddr___05Frdy[16];        
        unsigned char * recv_wopt___05Fen[16];        
        unsigned long * recv_wopt___05Fmsg[16];        
        unsigned char * recv_wopt___05Frdy[16];

        // Verilator model
        void * model;

      } VCGRARTL__1d39f2e940519f92_t;

      VCGRARTL__1d39f2e940519f92_t * create_model( const char * );
      void destroy_model( VCGRARTL__1d39f2e940519f92_t *);
      void eval( VCGRARTL__1d39f2e940519f92_t * );
      void assert_en( bool en );
      

    """)

    # Print the modification time stamp of the shared lib
    # print 'Modification time of {}: {}'.format(
    #   'libCGRARTL__1d39f2e940519f92_v.so', os.path.getmtime( './libCGRARTL__1d39f2e940519f92_v.so' ) )

    # Import the shared library containing the model. We defer
    # construction to the elaborate_logic function to allow the user to
    # set the vcd_file.
    s._ffi_inst = s.ffi.dlopen('./libCGRARTL__1d39f2e940519f92_v.so')

    # increment instance count
    CGRARTL__1d39f2e940519f92.id_ += 1

  def finalize( s ):
    """Finalize the imported component.

    This method closes the shared library opened through CFFI. If an imported
    component is not finalized explicitly (i.e. if you rely on GC to collect a
    no longer used imported component), importing a component with the same
    name before all previous imported components are GCed might lead to
    confusing behaviors. This is because once opened, the shared lib
    is cached by the OS until the OS reference counter for this lib reaches
    0 (you can decrement the reference counter by calling `dl_close()` syscall).

    Fortunately real designs tend to always have the same shared lib corresponding
    to the components with the same name. If you are doing translation testing and
    use the same component class name even if they refer to different designs,
    you might need to call `imported_object.finalize()` at the end of each test
    to ensure correct behaviors.
    """
    assert s._finalization_count == 0,\
      'Imported component can only be finalized once!'
    s._finalization_count += 1
    s._ffi_inst.destroy_model( s._ffi_m )
    s.ffi.dlclose( s._ffi_inst )
    s.ffi = None
    s._ffi_inst = None

  def __del__( s ):
    if s._finalization_count == 0:
      s._finalization_count += 1
      s._ffi_inst.destroy_model( s._ffi_m )
      s.ffi.dlclose( s._ffi_inst )
      s.ffi = None
      s._ffi_inst = None

  def construct( s, *args, **kwargs ):
    # Set up the VCD file name
    verilator_vcd_file = ""
    if 0:
      if False:
        verilator_vcd_file = ".vcd"
      else:
        verilator_vcd_file = "CGRARTL__1d39f2e940519f92.verilator1.vcd"

    # Convert string to `bytes` which is required by CFFI on python 3
    verilator_vcd_file = verilator_vcd_file.encode('ascii')

    # Construct the model
    s._ffi_m = s._ffi_inst.create_model( s.ffi.new("char[]", verilator_vcd_file) )

    # Buffer for line tracing
    s._line_trace_str = s.ffi.new('char[512]')
    s._convert_string = s.ffi.string

    # Use non-attribute varialbe to reduce CPython bytecode count
    _ffi_m = s._ffi_m
    _ffi_inst = s._ffi_inst

    # declare the port interface
    s.recv_waddr = [ RecvIfcRTL( Bits3 ) for _ in range(16) ]
    s.recv_wopt = [ RecvIfcRTL( CGRAConfig_6_4_6_8 ) for _ in range(16) ]

    # update blocks that converts ffi interface to/from pymtl ports
    s.s_DOT_reset = Wire( Bits1 )
    @s.update
    def isignal_s_DOT_reset():
      s.s_DOT_reset = s.reset
    s.s_DOT_recv_waddr_LB_0_RB__DOT_en = Wire( Bits1 )
    @s.update
    def isignal_s_DOT_recv_waddr_LB_0_RB__DOT_en():
      s.s_DOT_recv_waddr_LB_0_RB__DOT_en = s.recv_waddr[0].en
    s.s_DOT_recv_waddr_LB_1_RB__DOT_en = Wire( Bits1 )
    @s.update
    def isignal_s_DOT_recv_waddr_LB_1_RB__DOT_en():
      s.s_DOT_recv_waddr_LB_1_RB__DOT_en = s.recv_waddr[1].en
    s.s_DOT_recv_waddr_LB_2_RB__DOT_en = Wire( Bits1 )
    @s.update
    def isignal_s_DOT_recv_waddr_LB_2_RB__DOT_en():
      s.s_DOT_recv_waddr_LB_2_RB__DOT_en = s.recv_waddr[2].en
    s.s_DOT_recv_waddr_LB_3_RB__DOT_en = Wire( Bits1 )
    @s.update
    def isignal_s_DOT_recv_waddr_LB_3_RB__DOT_en():
      s.s_DOT_recv_waddr_LB_3_RB__DOT_en = s.recv_waddr[3].en
    s.s_DOT_recv_waddr_LB_4_RB__DOT_en = Wire( Bits1 )
    @s.update
    def isignal_s_DOT_recv_waddr_LB_4_RB__DOT_en():
      s.s_DOT_recv_waddr_LB_4_RB__DOT_en = s.recv_waddr[4].en
    s.s_DOT_recv_waddr_LB_5_RB__DOT_en = Wire( Bits1 )
    @s.update
    def isignal_s_DOT_recv_waddr_LB_5_RB__DOT_en():
      s.s_DOT_recv_waddr_LB_5_RB__DOT_en = s.recv_waddr[5].en
    s.s_DOT_recv_waddr_LB_6_RB__DOT_en = Wire( Bits1 )
    @s.update
    def isignal_s_DOT_recv_waddr_LB_6_RB__DOT_en():
      s.s_DOT_recv_waddr_LB_6_RB__DOT_en = s.recv_waddr[6].en
    s.s_DOT_recv_waddr_LB_7_RB__DOT_en = Wire( Bits1 )
    @s.update
    def isignal_s_DOT_recv_waddr_LB_7_RB__DOT_en():
      s.s_DOT_recv_waddr_LB_7_RB__DOT_en = s.recv_waddr[7].en
    s.s_DOT_recv_waddr_LB_8_RB__DOT_en = Wire( Bits1 )
    @s.update
    def isignal_s_DOT_recv_waddr_LB_8_RB__DOT_en():
      s.s_DOT_recv_waddr_LB_8_RB__DOT_en = s.recv_waddr[8].en
    s.s_DOT_recv_waddr_LB_9_RB__DOT_en = Wire( Bits1 )
    @s.update
    def isignal_s_DOT_recv_waddr_LB_9_RB__DOT_en():
      s.s_DOT_recv_waddr_LB_9_RB__DOT_en = s.recv_waddr[9].en
    s.s_DOT_recv_waddr_LB_10_RB__DOT_en = Wire( Bits1 )
    @s.update
    def isignal_s_DOT_recv_waddr_LB_10_RB__DOT_en():
      s.s_DOT_recv_waddr_LB_10_RB__DOT_en = s.recv_waddr[10].en
    s.s_DOT_recv_waddr_LB_11_RB__DOT_en = Wire( Bits1 )
    @s.update
    def isignal_s_DOT_recv_waddr_LB_11_RB__DOT_en():
      s.s_DOT_recv_waddr_LB_11_RB__DOT_en = s.recv_waddr[11].en
    s.s_DOT_recv_waddr_LB_12_RB__DOT_en = Wire( Bits1 )
    @s.update
    def isignal_s_DOT_recv_waddr_LB_12_RB__DOT_en():
      s.s_DOT_recv_waddr_LB_12_RB__DOT_en = s.recv_waddr[12].en
    s.s_DOT_recv_waddr_LB_13_RB__DOT_en = Wire( Bits1 )
    @s.update
    def isignal_s_DOT_recv_waddr_LB_13_RB__DOT_en():
      s.s_DOT_recv_waddr_LB_13_RB__DOT_en = s.recv_waddr[13].en
    s.s_DOT_recv_waddr_LB_14_RB__DOT_en = Wire( Bits1 )
    @s.update
    def isignal_s_DOT_recv_waddr_LB_14_RB__DOT_en():
      s.s_DOT_recv_waddr_LB_14_RB__DOT_en = s.recv_waddr[14].en
    s.s_DOT_recv_waddr_LB_15_RB__DOT_en = Wire( Bits1 )
    @s.update
    def isignal_s_DOT_recv_waddr_LB_15_RB__DOT_en():
      s.s_DOT_recv_waddr_LB_15_RB__DOT_en = s.recv_waddr[15].en
    s.s_DOT_recv_waddr_LB_0_RB__DOT_msg = Wire( Bits3 )
    @s.update
    def isignal_s_DOT_recv_waddr_LB_0_RB__DOT_msg():
      s.s_DOT_recv_waddr_LB_0_RB__DOT_msg = s.recv_waddr[0].msg
    s.s_DOT_recv_waddr_LB_1_RB__DOT_msg = Wire( Bits3 )
    @s.update
    def isignal_s_DOT_recv_waddr_LB_1_RB__DOT_msg():
      s.s_DOT_recv_waddr_LB_1_RB__DOT_msg = s.recv_waddr[1].msg
    s.s_DOT_recv_waddr_LB_2_RB__DOT_msg = Wire( Bits3 )
    @s.update
    def isignal_s_DOT_recv_waddr_LB_2_RB__DOT_msg():
      s.s_DOT_recv_waddr_LB_2_RB__DOT_msg = s.recv_waddr[2].msg
    s.s_DOT_recv_waddr_LB_3_RB__DOT_msg = Wire( Bits3 )
    @s.update
    def isignal_s_DOT_recv_waddr_LB_3_RB__DOT_msg():
      s.s_DOT_recv_waddr_LB_3_RB__DOT_msg = s.recv_waddr[3].msg
    s.s_DOT_recv_waddr_LB_4_RB__DOT_msg = Wire( Bits3 )
    @s.update
    def isignal_s_DOT_recv_waddr_LB_4_RB__DOT_msg():
      s.s_DOT_recv_waddr_LB_4_RB__DOT_msg = s.recv_waddr[4].msg
    s.s_DOT_recv_waddr_LB_5_RB__DOT_msg = Wire( Bits3 )
    @s.update
    def isignal_s_DOT_recv_waddr_LB_5_RB__DOT_msg():
      s.s_DOT_recv_waddr_LB_5_RB__DOT_msg = s.recv_waddr[5].msg
    s.s_DOT_recv_waddr_LB_6_RB__DOT_msg = Wire( Bits3 )
    @s.update
    def isignal_s_DOT_recv_waddr_LB_6_RB__DOT_msg():
      s.s_DOT_recv_waddr_LB_6_RB__DOT_msg = s.recv_waddr[6].msg
    s.s_DOT_recv_waddr_LB_7_RB__DOT_msg = Wire( Bits3 )
    @s.update
    def isignal_s_DOT_recv_waddr_LB_7_RB__DOT_msg():
      s.s_DOT_recv_waddr_LB_7_RB__DOT_msg = s.recv_waddr[7].msg
    s.s_DOT_recv_waddr_LB_8_RB__DOT_msg = Wire( Bits3 )
    @s.update
    def isignal_s_DOT_recv_waddr_LB_8_RB__DOT_msg():
      s.s_DOT_recv_waddr_LB_8_RB__DOT_msg = s.recv_waddr[8].msg
    s.s_DOT_recv_waddr_LB_9_RB__DOT_msg = Wire( Bits3 )
    @s.update
    def isignal_s_DOT_recv_waddr_LB_9_RB__DOT_msg():
      s.s_DOT_recv_waddr_LB_9_RB__DOT_msg = s.recv_waddr[9].msg
    s.s_DOT_recv_waddr_LB_10_RB__DOT_msg = Wire( Bits3 )
    @s.update
    def isignal_s_DOT_recv_waddr_LB_10_RB__DOT_msg():
      s.s_DOT_recv_waddr_LB_10_RB__DOT_msg = s.recv_waddr[10].msg
    s.s_DOT_recv_waddr_LB_11_RB__DOT_msg = Wire( Bits3 )
    @s.update
    def isignal_s_DOT_recv_waddr_LB_11_RB__DOT_msg():
      s.s_DOT_recv_waddr_LB_11_RB__DOT_msg = s.recv_waddr[11].msg
    s.s_DOT_recv_waddr_LB_12_RB__DOT_msg = Wire( Bits3 )
    @s.update
    def isignal_s_DOT_recv_waddr_LB_12_RB__DOT_msg():
      s.s_DOT_recv_waddr_LB_12_RB__DOT_msg = s.recv_waddr[12].msg
    s.s_DOT_recv_waddr_LB_13_RB__DOT_msg = Wire( Bits3 )
    @s.update
    def isignal_s_DOT_recv_waddr_LB_13_RB__DOT_msg():
      s.s_DOT_recv_waddr_LB_13_RB__DOT_msg = s.recv_waddr[13].msg
    s.s_DOT_recv_waddr_LB_14_RB__DOT_msg = Wire( Bits3 )
    @s.update
    def isignal_s_DOT_recv_waddr_LB_14_RB__DOT_msg():
      s.s_DOT_recv_waddr_LB_14_RB__DOT_msg = s.recv_waddr[14].msg
    s.s_DOT_recv_waddr_LB_15_RB__DOT_msg = Wire( Bits3 )
    @s.update
    def isignal_s_DOT_recv_waddr_LB_15_RB__DOT_msg():
      s.s_DOT_recv_waddr_LB_15_RB__DOT_msg = s.recv_waddr[15].msg
    s.s_DOT_recv_wopt_LB_0_RB__DOT_en = Wire( Bits1 )
    @s.update
    def isignal_s_DOT_recv_wopt_LB_0_RB__DOT_en():
      s.s_DOT_recv_wopt_LB_0_RB__DOT_en = s.recv_wopt[0].en
    s.s_DOT_recv_wopt_LB_1_RB__DOT_en = Wire( Bits1 )
    @s.update
    def isignal_s_DOT_recv_wopt_LB_1_RB__DOT_en():
      s.s_DOT_recv_wopt_LB_1_RB__DOT_en = s.recv_wopt[1].en
    s.s_DOT_recv_wopt_LB_2_RB__DOT_en = Wire( Bits1 )
    @s.update
    def isignal_s_DOT_recv_wopt_LB_2_RB__DOT_en():
      s.s_DOT_recv_wopt_LB_2_RB__DOT_en = s.recv_wopt[2].en
    s.s_DOT_recv_wopt_LB_3_RB__DOT_en = Wire( Bits1 )
    @s.update
    def isignal_s_DOT_recv_wopt_LB_3_RB__DOT_en():
      s.s_DOT_recv_wopt_LB_3_RB__DOT_en = s.recv_wopt[3].en
    s.s_DOT_recv_wopt_LB_4_RB__DOT_en = Wire( Bits1 )
    @s.update
    def isignal_s_DOT_recv_wopt_LB_4_RB__DOT_en():
      s.s_DOT_recv_wopt_LB_4_RB__DOT_en = s.recv_wopt[4].en
    s.s_DOT_recv_wopt_LB_5_RB__DOT_en = Wire( Bits1 )
    @s.update
    def isignal_s_DOT_recv_wopt_LB_5_RB__DOT_en():
      s.s_DOT_recv_wopt_LB_5_RB__DOT_en = s.recv_wopt[5].en
    s.s_DOT_recv_wopt_LB_6_RB__DOT_en = Wire( Bits1 )
    @s.update
    def isignal_s_DOT_recv_wopt_LB_6_RB__DOT_en():
      s.s_DOT_recv_wopt_LB_6_RB__DOT_en = s.recv_wopt[6].en
    s.s_DOT_recv_wopt_LB_7_RB__DOT_en = Wire( Bits1 )
    @s.update
    def isignal_s_DOT_recv_wopt_LB_7_RB__DOT_en():
      s.s_DOT_recv_wopt_LB_7_RB__DOT_en = s.recv_wopt[7].en
    s.s_DOT_recv_wopt_LB_8_RB__DOT_en = Wire( Bits1 )
    @s.update
    def isignal_s_DOT_recv_wopt_LB_8_RB__DOT_en():
      s.s_DOT_recv_wopt_LB_8_RB__DOT_en = s.recv_wopt[8].en
    s.s_DOT_recv_wopt_LB_9_RB__DOT_en = Wire( Bits1 )
    @s.update
    def isignal_s_DOT_recv_wopt_LB_9_RB__DOT_en():
      s.s_DOT_recv_wopt_LB_9_RB__DOT_en = s.recv_wopt[9].en
    s.s_DOT_recv_wopt_LB_10_RB__DOT_en = Wire( Bits1 )
    @s.update
    def isignal_s_DOT_recv_wopt_LB_10_RB__DOT_en():
      s.s_DOT_recv_wopt_LB_10_RB__DOT_en = s.recv_wopt[10].en
    s.s_DOT_recv_wopt_LB_11_RB__DOT_en = Wire( Bits1 )
    @s.update
    def isignal_s_DOT_recv_wopt_LB_11_RB__DOT_en():
      s.s_DOT_recv_wopt_LB_11_RB__DOT_en = s.recv_wopt[11].en
    s.s_DOT_recv_wopt_LB_12_RB__DOT_en = Wire( Bits1 )
    @s.update
    def isignal_s_DOT_recv_wopt_LB_12_RB__DOT_en():
      s.s_DOT_recv_wopt_LB_12_RB__DOT_en = s.recv_wopt[12].en
    s.s_DOT_recv_wopt_LB_13_RB__DOT_en = Wire( Bits1 )
    @s.update
    def isignal_s_DOT_recv_wopt_LB_13_RB__DOT_en():
      s.s_DOT_recv_wopt_LB_13_RB__DOT_en = s.recv_wopt[13].en
    s.s_DOT_recv_wopt_LB_14_RB__DOT_en = Wire( Bits1 )
    @s.update
    def isignal_s_DOT_recv_wopt_LB_14_RB__DOT_en():
      s.s_DOT_recv_wopt_LB_14_RB__DOT_en = s.recv_wopt[14].en
    s.s_DOT_recv_wopt_LB_15_RB__DOT_en = Wire( Bits1 )
    @s.update
    def isignal_s_DOT_recv_wopt_LB_15_RB__DOT_en():
      s.s_DOT_recv_wopt_LB_15_RB__DOT_en = s.recv_wopt[15].en
    s.s_DOT_recv_wopt_LB_0_RB__DOT_msg = Wire( Bits49 )
    @s.update
    def istruct_s_DOT_recv_wopt_LB_0_RB__DOT_msg():
      s.s_DOT_recv_wopt_LB_0_RB__DOT_msg[0:1] = s.recv_wopt[0].msg.predicate_in[0]
      s.s_DOT_recv_wopt_LB_0_RB__DOT_msg[1:2] = s.recv_wopt[0].msg.predicate_in[1]
      s.s_DOT_recv_wopt_LB_0_RB__DOT_msg[2:3] = s.recv_wopt[0].msg.predicate_in[2]
      s.s_DOT_recv_wopt_LB_0_RB__DOT_msg[3:4] = s.recv_wopt[0].msg.predicate_in[3]
      s.s_DOT_recv_wopt_LB_0_RB__DOT_msg[4:5] = s.recv_wopt[0].msg.predicate_in[4]
      s.s_DOT_recv_wopt_LB_0_RB__DOT_msg[5:6] = s.recv_wopt[0].msg.predicate_in[5]
      s.s_DOT_recv_wopt_LB_0_RB__DOT_msg[6:9] = s.recv_wopt[0].msg.outport[0]
      s.s_DOT_recv_wopt_LB_0_RB__DOT_msg[9:12] = s.recv_wopt[0].msg.outport[1]
      s.s_DOT_recv_wopt_LB_0_RB__DOT_msg[12:15] = s.recv_wopt[0].msg.outport[2]
      s.s_DOT_recv_wopt_LB_0_RB__DOT_msg[15:18] = s.recv_wopt[0].msg.outport[3]
      s.s_DOT_recv_wopt_LB_0_RB__DOT_msg[18:21] = s.recv_wopt[0].msg.outport[4]
      s.s_DOT_recv_wopt_LB_0_RB__DOT_msg[21:24] = s.recv_wopt[0].msg.outport[5]
      s.s_DOT_recv_wopt_LB_0_RB__DOT_msg[24:27] = s.recv_wopt[0].msg.outport[6]
      s.s_DOT_recv_wopt_LB_0_RB__DOT_msg[27:30] = s.recv_wopt[0].msg.outport[7]
      s.s_DOT_recv_wopt_LB_0_RB__DOT_msg[30:33] = s.recv_wopt[0].msg.fu_in[0]
      s.s_DOT_recv_wopt_LB_0_RB__DOT_msg[33:36] = s.recv_wopt[0].msg.fu_in[1]
      s.s_DOT_recv_wopt_LB_0_RB__DOT_msg[36:39] = s.recv_wopt[0].msg.fu_in[2]
      s.s_DOT_recv_wopt_LB_0_RB__DOT_msg[39:42] = s.recv_wopt[0].msg.fu_in[3]
      s.s_DOT_recv_wopt_LB_0_RB__DOT_msg[42:43] = s.recv_wopt[0].msg.predicate
      s.s_DOT_recv_wopt_LB_0_RB__DOT_msg[43:49] = s.recv_wopt[0].msg.ctrl
    s.s_DOT_recv_wopt_LB_1_RB__DOT_msg = Wire( Bits49 )
    @s.update
    def istruct_s_DOT_recv_wopt_LB_1_RB__DOT_msg():
      s.s_DOT_recv_wopt_LB_1_RB__DOT_msg[0:1] = s.recv_wopt[1].msg.predicate_in[0]
      s.s_DOT_recv_wopt_LB_1_RB__DOT_msg[1:2] = s.recv_wopt[1].msg.predicate_in[1]
      s.s_DOT_recv_wopt_LB_1_RB__DOT_msg[2:3] = s.recv_wopt[1].msg.predicate_in[2]
      s.s_DOT_recv_wopt_LB_1_RB__DOT_msg[3:4] = s.recv_wopt[1].msg.predicate_in[3]
      s.s_DOT_recv_wopt_LB_1_RB__DOT_msg[4:5] = s.recv_wopt[1].msg.predicate_in[4]
      s.s_DOT_recv_wopt_LB_1_RB__DOT_msg[5:6] = s.recv_wopt[1].msg.predicate_in[5]
      s.s_DOT_recv_wopt_LB_1_RB__DOT_msg[6:9] = s.recv_wopt[1].msg.outport[0]
      s.s_DOT_recv_wopt_LB_1_RB__DOT_msg[9:12] = s.recv_wopt[1].msg.outport[1]
      s.s_DOT_recv_wopt_LB_1_RB__DOT_msg[12:15] = s.recv_wopt[1].msg.outport[2]
      s.s_DOT_recv_wopt_LB_1_RB__DOT_msg[15:18] = s.recv_wopt[1].msg.outport[3]
      s.s_DOT_recv_wopt_LB_1_RB__DOT_msg[18:21] = s.recv_wopt[1].msg.outport[4]
      s.s_DOT_recv_wopt_LB_1_RB__DOT_msg[21:24] = s.recv_wopt[1].msg.outport[5]
      s.s_DOT_recv_wopt_LB_1_RB__DOT_msg[24:27] = s.recv_wopt[1].msg.outport[6]
      s.s_DOT_recv_wopt_LB_1_RB__DOT_msg[27:30] = s.recv_wopt[1].msg.outport[7]
      s.s_DOT_recv_wopt_LB_1_RB__DOT_msg[30:33] = s.recv_wopt[1].msg.fu_in[0]
      s.s_DOT_recv_wopt_LB_1_RB__DOT_msg[33:36] = s.recv_wopt[1].msg.fu_in[1]
      s.s_DOT_recv_wopt_LB_1_RB__DOT_msg[36:39] = s.recv_wopt[1].msg.fu_in[2]
      s.s_DOT_recv_wopt_LB_1_RB__DOT_msg[39:42] = s.recv_wopt[1].msg.fu_in[3]
      s.s_DOT_recv_wopt_LB_1_RB__DOT_msg[42:43] = s.recv_wopt[1].msg.predicate
      s.s_DOT_recv_wopt_LB_1_RB__DOT_msg[43:49] = s.recv_wopt[1].msg.ctrl
    s.s_DOT_recv_wopt_LB_2_RB__DOT_msg = Wire( Bits49 )
    @s.update
    def istruct_s_DOT_recv_wopt_LB_2_RB__DOT_msg():
      s.s_DOT_recv_wopt_LB_2_RB__DOT_msg[0:1] = s.recv_wopt[2].msg.predicate_in[0]
      s.s_DOT_recv_wopt_LB_2_RB__DOT_msg[1:2] = s.recv_wopt[2].msg.predicate_in[1]
      s.s_DOT_recv_wopt_LB_2_RB__DOT_msg[2:3] = s.recv_wopt[2].msg.predicate_in[2]
      s.s_DOT_recv_wopt_LB_2_RB__DOT_msg[3:4] = s.recv_wopt[2].msg.predicate_in[3]
      s.s_DOT_recv_wopt_LB_2_RB__DOT_msg[4:5] = s.recv_wopt[2].msg.predicate_in[4]
      s.s_DOT_recv_wopt_LB_2_RB__DOT_msg[5:6] = s.recv_wopt[2].msg.predicate_in[5]
      s.s_DOT_recv_wopt_LB_2_RB__DOT_msg[6:9] = s.recv_wopt[2].msg.outport[0]
      s.s_DOT_recv_wopt_LB_2_RB__DOT_msg[9:12] = s.recv_wopt[2].msg.outport[1]
      s.s_DOT_recv_wopt_LB_2_RB__DOT_msg[12:15] = s.recv_wopt[2].msg.outport[2]
      s.s_DOT_recv_wopt_LB_2_RB__DOT_msg[15:18] = s.recv_wopt[2].msg.outport[3]
      s.s_DOT_recv_wopt_LB_2_RB__DOT_msg[18:21] = s.recv_wopt[2].msg.outport[4]
      s.s_DOT_recv_wopt_LB_2_RB__DOT_msg[21:24] = s.recv_wopt[2].msg.outport[5]
      s.s_DOT_recv_wopt_LB_2_RB__DOT_msg[24:27] = s.recv_wopt[2].msg.outport[6]
      s.s_DOT_recv_wopt_LB_2_RB__DOT_msg[27:30] = s.recv_wopt[2].msg.outport[7]
      s.s_DOT_recv_wopt_LB_2_RB__DOT_msg[30:33] = s.recv_wopt[2].msg.fu_in[0]
      s.s_DOT_recv_wopt_LB_2_RB__DOT_msg[33:36] = s.recv_wopt[2].msg.fu_in[1]
      s.s_DOT_recv_wopt_LB_2_RB__DOT_msg[36:39] = s.recv_wopt[2].msg.fu_in[2]
      s.s_DOT_recv_wopt_LB_2_RB__DOT_msg[39:42] = s.recv_wopt[2].msg.fu_in[3]
      s.s_DOT_recv_wopt_LB_2_RB__DOT_msg[42:43] = s.recv_wopt[2].msg.predicate
      s.s_DOT_recv_wopt_LB_2_RB__DOT_msg[43:49] = s.recv_wopt[2].msg.ctrl
    s.s_DOT_recv_wopt_LB_3_RB__DOT_msg = Wire( Bits49 )
    @s.update
    def istruct_s_DOT_recv_wopt_LB_3_RB__DOT_msg():
      s.s_DOT_recv_wopt_LB_3_RB__DOT_msg[0:1] = s.recv_wopt[3].msg.predicate_in[0]
      s.s_DOT_recv_wopt_LB_3_RB__DOT_msg[1:2] = s.recv_wopt[3].msg.predicate_in[1]
      s.s_DOT_recv_wopt_LB_3_RB__DOT_msg[2:3] = s.recv_wopt[3].msg.predicate_in[2]
      s.s_DOT_recv_wopt_LB_3_RB__DOT_msg[3:4] = s.recv_wopt[3].msg.predicate_in[3]
      s.s_DOT_recv_wopt_LB_3_RB__DOT_msg[4:5] = s.recv_wopt[3].msg.predicate_in[4]
      s.s_DOT_recv_wopt_LB_3_RB__DOT_msg[5:6] = s.recv_wopt[3].msg.predicate_in[5]
      s.s_DOT_recv_wopt_LB_3_RB__DOT_msg[6:9] = s.recv_wopt[3].msg.outport[0]
      s.s_DOT_recv_wopt_LB_3_RB__DOT_msg[9:12] = s.recv_wopt[3].msg.outport[1]
      s.s_DOT_recv_wopt_LB_3_RB__DOT_msg[12:15] = s.recv_wopt[3].msg.outport[2]
      s.s_DOT_recv_wopt_LB_3_RB__DOT_msg[15:18] = s.recv_wopt[3].msg.outport[3]
      s.s_DOT_recv_wopt_LB_3_RB__DOT_msg[18:21] = s.recv_wopt[3].msg.outport[4]
      s.s_DOT_recv_wopt_LB_3_RB__DOT_msg[21:24] = s.recv_wopt[3].msg.outport[5]
      s.s_DOT_recv_wopt_LB_3_RB__DOT_msg[24:27] = s.recv_wopt[3].msg.outport[6]
      s.s_DOT_recv_wopt_LB_3_RB__DOT_msg[27:30] = s.recv_wopt[3].msg.outport[7]
      s.s_DOT_recv_wopt_LB_3_RB__DOT_msg[30:33] = s.recv_wopt[3].msg.fu_in[0]
      s.s_DOT_recv_wopt_LB_3_RB__DOT_msg[33:36] = s.recv_wopt[3].msg.fu_in[1]
      s.s_DOT_recv_wopt_LB_3_RB__DOT_msg[36:39] = s.recv_wopt[3].msg.fu_in[2]
      s.s_DOT_recv_wopt_LB_3_RB__DOT_msg[39:42] = s.recv_wopt[3].msg.fu_in[3]
      s.s_DOT_recv_wopt_LB_3_RB__DOT_msg[42:43] = s.recv_wopt[3].msg.predicate
      s.s_DOT_recv_wopt_LB_3_RB__DOT_msg[43:49] = s.recv_wopt[3].msg.ctrl
    s.s_DOT_recv_wopt_LB_4_RB__DOT_msg = Wire( Bits49 )
    @s.update
    def istruct_s_DOT_recv_wopt_LB_4_RB__DOT_msg():
      s.s_DOT_recv_wopt_LB_4_RB__DOT_msg[0:1] = s.recv_wopt[4].msg.predicate_in[0]
      s.s_DOT_recv_wopt_LB_4_RB__DOT_msg[1:2] = s.recv_wopt[4].msg.predicate_in[1]
      s.s_DOT_recv_wopt_LB_4_RB__DOT_msg[2:3] = s.recv_wopt[4].msg.predicate_in[2]
      s.s_DOT_recv_wopt_LB_4_RB__DOT_msg[3:4] = s.recv_wopt[4].msg.predicate_in[3]
      s.s_DOT_recv_wopt_LB_4_RB__DOT_msg[4:5] = s.recv_wopt[4].msg.predicate_in[4]
      s.s_DOT_recv_wopt_LB_4_RB__DOT_msg[5:6] = s.recv_wopt[4].msg.predicate_in[5]
      s.s_DOT_recv_wopt_LB_4_RB__DOT_msg[6:9] = s.recv_wopt[4].msg.outport[0]
      s.s_DOT_recv_wopt_LB_4_RB__DOT_msg[9:12] = s.recv_wopt[4].msg.outport[1]
      s.s_DOT_recv_wopt_LB_4_RB__DOT_msg[12:15] = s.recv_wopt[4].msg.outport[2]
      s.s_DOT_recv_wopt_LB_4_RB__DOT_msg[15:18] = s.recv_wopt[4].msg.outport[3]
      s.s_DOT_recv_wopt_LB_4_RB__DOT_msg[18:21] = s.recv_wopt[4].msg.outport[4]
      s.s_DOT_recv_wopt_LB_4_RB__DOT_msg[21:24] = s.recv_wopt[4].msg.outport[5]
      s.s_DOT_recv_wopt_LB_4_RB__DOT_msg[24:27] = s.recv_wopt[4].msg.outport[6]
      s.s_DOT_recv_wopt_LB_4_RB__DOT_msg[27:30] = s.recv_wopt[4].msg.outport[7]
      s.s_DOT_recv_wopt_LB_4_RB__DOT_msg[30:33] = s.recv_wopt[4].msg.fu_in[0]
      s.s_DOT_recv_wopt_LB_4_RB__DOT_msg[33:36] = s.recv_wopt[4].msg.fu_in[1]
      s.s_DOT_recv_wopt_LB_4_RB__DOT_msg[36:39] = s.recv_wopt[4].msg.fu_in[2]
      s.s_DOT_recv_wopt_LB_4_RB__DOT_msg[39:42] = s.recv_wopt[4].msg.fu_in[3]
      s.s_DOT_recv_wopt_LB_4_RB__DOT_msg[42:43] = s.recv_wopt[4].msg.predicate
      s.s_DOT_recv_wopt_LB_4_RB__DOT_msg[43:49] = s.recv_wopt[4].msg.ctrl
    s.s_DOT_recv_wopt_LB_5_RB__DOT_msg = Wire( Bits49 )
    @s.update
    def istruct_s_DOT_recv_wopt_LB_5_RB__DOT_msg():
      s.s_DOT_recv_wopt_LB_5_RB__DOT_msg[0:1] = s.recv_wopt[5].msg.predicate_in[0]
      s.s_DOT_recv_wopt_LB_5_RB__DOT_msg[1:2] = s.recv_wopt[5].msg.predicate_in[1]
      s.s_DOT_recv_wopt_LB_5_RB__DOT_msg[2:3] = s.recv_wopt[5].msg.predicate_in[2]
      s.s_DOT_recv_wopt_LB_5_RB__DOT_msg[3:4] = s.recv_wopt[5].msg.predicate_in[3]
      s.s_DOT_recv_wopt_LB_5_RB__DOT_msg[4:5] = s.recv_wopt[5].msg.predicate_in[4]
      s.s_DOT_recv_wopt_LB_5_RB__DOT_msg[5:6] = s.recv_wopt[5].msg.predicate_in[5]
      s.s_DOT_recv_wopt_LB_5_RB__DOT_msg[6:9] = s.recv_wopt[5].msg.outport[0]
      s.s_DOT_recv_wopt_LB_5_RB__DOT_msg[9:12] = s.recv_wopt[5].msg.outport[1]
      s.s_DOT_recv_wopt_LB_5_RB__DOT_msg[12:15] = s.recv_wopt[5].msg.outport[2]
      s.s_DOT_recv_wopt_LB_5_RB__DOT_msg[15:18] = s.recv_wopt[5].msg.outport[3]
      s.s_DOT_recv_wopt_LB_5_RB__DOT_msg[18:21] = s.recv_wopt[5].msg.outport[4]
      s.s_DOT_recv_wopt_LB_5_RB__DOT_msg[21:24] = s.recv_wopt[5].msg.outport[5]
      s.s_DOT_recv_wopt_LB_5_RB__DOT_msg[24:27] = s.recv_wopt[5].msg.outport[6]
      s.s_DOT_recv_wopt_LB_5_RB__DOT_msg[27:30] = s.recv_wopt[5].msg.outport[7]
      s.s_DOT_recv_wopt_LB_5_RB__DOT_msg[30:33] = s.recv_wopt[5].msg.fu_in[0]
      s.s_DOT_recv_wopt_LB_5_RB__DOT_msg[33:36] = s.recv_wopt[5].msg.fu_in[1]
      s.s_DOT_recv_wopt_LB_5_RB__DOT_msg[36:39] = s.recv_wopt[5].msg.fu_in[2]
      s.s_DOT_recv_wopt_LB_5_RB__DOT_msg[39:42] = s.recv_wopt[5].msg.fu_in[3]
      s.s_DOT_recv_wopt_LB_5_RB__DOT_msg[42:43] = s.recv_wopt[5].msg.predicate
      s.s_DOT_recv_wopt_LB_5_RB__DOT_msg[43:49] = s.recv_wopt[5].msg.ctrl
    s.s_DOT_recv_wopt_LB_6_RB__DOT_msg = Wire( Bits49 )
    @s.update
    def istruct_s_DOT_recv_wopt_LB_6_RB__DOT_msg():
      s.s_DOT_recv_wopt_LB_6_RB__DOT_msg[0:1] = s.recv_wopt[6].msg.predicate_in[0]
      s.s_DOT_recv_wopt_LB_6_RB__DOT_msg[1:2] = s.recv_wopt[6].msg.predicate_in[1]
      s.s_DOT_recv_wopt_LB_6_RB__DOT_msg[2:3] = s.recv_wopt[6].msg.predicate_in[2]
      s.s_DOT_recv_wopt_LB_6_RB__DOT_msg[3:4] = s.recv_wopt[6].msg.predicate_in[3]
      s.s_DOT_recv_wopt_LB_6_RB__DOT_msg[4:5] = s.recv_wopt[6].msg.predicate_in[4]
      s.s_DOT_recv_wopt_LB_6_RB__DOT_msg[5:6] = s.recv_wopt[6].msg.predicate_in[5]
      s.s_DOT_recv_wopt_LB_6_RB__DOT_msg[6:9] = s.recv_wopt[6].msg.outport[0]
      s.s_DOT_recv_wopt_LB_6_RB__DOT_msg[9:12] = s.recv_wopt[6].msg.outport[1]
      s.s_DOT_recv_wopt_LB_6_RB__DOT_msg[12:15] = s.recv_wopt[6].msg.outport[2]
      s.s_DOT_recv_wopt_LB_6_RB__DOT_msg[15:18] = s.recv_wopt[6].msg.outport[3]
      s.s_DOT_recv_wopt_LB_6_RB__DOT_msg[18:21] = s.recv_wopt[6].msg.outport[4]
      s.s_DOT_recv_wopt_LB_6_RB__DOT_msg[21:24] = s.recv_wopt[6].msg.outport[5]
      s.s_DOT_recv_wopt_LB_6_RB__DOT_msg[24:27] = s.recv_wopt[6].msg.outport[6]
      s.s_DOT_recv_wopt_LB_6_RB__DOT_msg[27:30] = s.recv_wopt[6].msg.outport[7]
      s.s_DOT_recv_wopt_LB_6_RB__DOT_msg[30:33] = s.recv_wopt[6].msg.fu_in[0]
      s.s_DOT_recv_wopt_LB_6_RB__DOT_msg[33:36] = s.recv_wopt[6].msg.fu_in[1]
      s.s_DOT_recv_wopt_LB_6_RB__DOT_msg[36:39] = s.recv_wopt[6].msg.fu_in[2]
      s.s_DOT_recv_wopt_LB_6_RB__DOT_msg[39:42] = s.recv_wopt[6].msg.fu_in[3]
      s.s_DOT_recv_wopt_LB_6_RB__DOT_msg[42:43] = s.recv_wopt[6].msg.predicate
      s.s_DOT_recv_wopt_LB_6_RB__DOT_msg[43:49] = s.recv_wopt[6].msg.ctrl
    s.s_DOT_recv_wopt_LB_7_RB__DOT_msg = Wire( Bits49 )
    @s.update
    def istruct_s_DOT_recv_wopt_LB_7_RB__DOT_msg():
      s.s_DOT_recv_wopt_LB_7_RB__DOT_msg[0:1] = s.recv_wopt[7].msg.predicate_in[0]
      s.s_DOT_recv_wopt_LB_7_RB__DOT_msg[1:2] = s.recv_wopt[7].msg.predicate_in[1]
      s.s_DOT_recv_wopt_LB_7_RB__DOT_msg[2:3] = s.recv_wopt[7].msg.predicate_in[2]
      s.s_DOT_recv_wopt_LB_7_RB__DOT_msg[3:4] = s.recv_wopt[7].msg.predicate_in[3]
      s.s_DOT_recv_wopt_LB_7_RB__DOT_msg[4:5] = s.recv_wopt[7].msg.predicate_in[4]
      s.s_DOT_recv_wopt_LB_7_RB__DOT_msg[5:6] = s.recv_wopt[7].msg.predicate_in[5]
      s.s_DOT_recv_wopt_LB_7_RB__DOT_msg[6:9] = s.recv_wopt[7].msg.outport[0]
      s.s_DOT_recv_wopt_LB_7_RB__DOT_msg[9:12] = s.recv_wopt[7].msg.outport[1]
      s.s_DOT_recv_wopt_LB_7_RB__DOT_msg[12:15] = s.recv_wopt[7].msg.outport[2]
      s.s_DOT_recv_wopt_LB_7_RB__DOT_msg[15:18] = s.recv_wopt[7].msg.outport[3]
      s.s_DOT_recv_wopt_LB_7_RB__DOT_msg[18:21] = s.recv_wopt[7].msg.outport[4]
      s.s_DOT_recv_wopt_LB_7_RB__DOT_msg[21:24] = s.recv_wopt[7].msg.outport[5]
      s.s_DOT_recv_wopt_LB_7_RB__DOT_msg[24:27] = s.recv_wopt[7].msg.outport[6]
      s.s_DOT_recv_wopt_LB_7_RB__DOT_msg[27:30] = s.recv_wopt[7].msg.outport[7]
      s.s_DOT_recv_wopt_LB_7_RB__DOT_msg[30:33] = s.recv_wopt[7].msg.fu_in[0]
      s.s_DOT_recv_wopt_LB_7_RB__DOT_msg[33:36] = s.recv_wopt[7].msg.fu_in[1]
      s.s_DOT_recv_wopt_LB_7_RB__DOT_msg[36:39] = s.recv_wopt[7].msg.fu_in[2]
      s.s_DOT_recv_wopt_LB_7_RB__DOT_msg[39:42] = s.recv_wopt[7].msg.fu_in[3]
      s.s_DOT_recv_wopt_LB_7_RB__DOT_msg[42:43] = s.recv_wopt[7].msg.predicate
      s.s_DOT_recv_wopt_LB_7_RB__DOT_msg[43:49] = s.recv_wopt[7].msg.ctrl
    s.s_DOT_recv_wopt_LB_8_RB__DOT_msg = Wire( Bits49 )
    @s.update
    def istruct_s_DOT_recv_wopt_LB_8_RB__DOT_msg():
      s.s_DOT_recv_wopt_LB_8_RB__DOT_msg[0:1] = s.recv_wopt[8].msg.predicate_in[0]
      s.s_DOT_recv_wopt_LB_8_RB__DOT_msg[1:2] = s.recv_wopt[8].msg.predicate_in[1]
      s.s_DOT_recv_wopt_LB_8_RB__DOT_msg[2:3] = s.recv_wopt[8].msg.predicate_in[2]
      s.s_DOT_recv_wopt_LB_8_RB__DOT_msg[3:4] = s.recv_wopt[8].msg.predicate_in[3]
      s.s_DOT_recv_wopt_LB_8_RB__DOT_msg[4:5] = s.recv_wopt[8].msg.predicate_in[4]
      s.s_DOT_recv_wopt_LB_8_RB__DOT_msg[5:6] = s.recv_wopt[8].msg.predicate_in[5]
      s.s_DOT_recv_wopt_LB_8_RB__DOT_msg[6:9] = s.recv_wopt[8].msg.outport[0]
      s.s_DOT_recv_wopt_LB_8_RB__DOT_msg[9:12] = s.recv_wopt[8].msg.outport[1]
      s.s_DOT_recv_wopt_LB_8_RB__DOT_msg[12:15] = s.recv_wopt[8].msg.outport[2]
      s.s_DOT_recv_wopt_LB_8_RB__DOT_msg[15:18] = s.recv_wopt[8].msg.outport[3]
      s.s_DOT_recv_wopt_LB_8_RB__DOT_msg[18:21] = s.recv_wopt[8].msg.outport[4]
      s.s_DOT_recv_wopt_LB_8_RB__DOT_msg[21:24] = s.recv_wopt[8].msg.outport[5]
      s.s_DOT_recv_wopt_LB_8_RB__DOT_msg[24:27] = s.recv_wopt[8].msg.outport[6]
      s.s_DOT_recv_wopt_LB_8_RB__DOT_msg[27:30] = s.recv_wopt[8].msg.outport[7]
      s.s_DOT_recv_wopt_LB_8_RB__DOT_msg[30:33] = s.recv_wopt[8].msg.fu_in[0]
      s.s_DOT_recv_wopt_LB_8_RB__DOT_msg[33:36] = s.recv_wopt[8].msg.fu_in[1]
      s.s_DOT_recv_wopt_LB_8_RB__DOT_msg[36:39] = s.recv_wopt[8].msg.fu_in[2]
      s.s_DOT_recv_wopt_LB_8_RB__DOT_msg[39:42] = s.recv_wopt[8].msg.fu_in[3]
      s.s_DOT_recv_wopt_LB_8_RB__DOT_msg[42:43] = s.recv_wopt[8].msg.predicate
      s.s_DOT_recv_wopt_LB_8_RB__DOT_msg[43:49] = s.recv_wopt[8].msg.ctrl
    s.s_DOT_recv_wopt_LB_9_RB__DOT_msg = Wire( Bits49 )
    @s.update
    def istruct_s_DOT_recv_wopt_LB_9_RB__DOT_msg():
      s.s_DOT_recv_wopt_LB_9_RB__DOT_msg[0:1] = s.recv_wopt[9].msg.predicate_in[0]
      s.s_DOT_recv_wopt_LB_9_RB__DOT_msg[1:2] = s.recv_wopt[9].msg.predicate_in[1]
      s.s_DOT_recv_wopt_LB_9_RB__DOT_msg[2:3] = s.recv_wopt[9].msg.predicate_in[2]
      s.s_DOT_recv_wopt_LB_9_RB__DOT_msg[3:4] = s.recv_wopt[9].msg.predicate_in[3]
      s.s_DOT_recv_wopt_LB_9_RB__DOT_msg[4:5] = s.recv_wopt[9].msg.predicate_in[4]
      s.s_DOT_recv_wopt_LB_9_RB__DOT_msg[5:6] = s.recv_wopt[9].msg.predicate_in[5]
      s.s_DOT_recv_wopt_LB_9_RB__DOT_msg[6:9] = s.recv_wopt[9].msg.outport[0]
      s.s_DOT_recv_wopt_LB_9_RB__DOT_msg[9:12] = s.recv_wopt[9].msg.outport[1]
      s.s_DOT_recv_wopt_LB_9_RB__DOT_msg[12:15] = s.recv_wopt[9].msg.outport[2]
      s.s_DOT_recv_wopt_LB_9_RB__DOT_msg[15:18] = s.recv_wopt[9].msg.outport[3]
      s.s_DOT_recv_wopt_LB_9_RB__DOT_msg[18:21] = s.recv_wopt[9].msg.outport[4]
      s.s_DOT_recv_wopt_LB_9_RB__DOT_msg[21:24] = s.recv_wopt[9].msg.outport[5]
      s.s_DOT_recv_wopt_LB_9_RB__DOT_msg[24:27] = s.recv_wopt[9].msg.outport[6]
      s.s_DOT_recv_wopt_LB_9_RB__DOT_msg[27:30] = s.recv_wopt[9].msg.outport[7]
      s.s_DOT_recv_wopt_LB_9_RB__DOT_msg[30:33] = s.recv_wopt[9].msg.fu_in[0]
      s.s_DOT_recv_wopt_LB_9_RB__DOT_msg[33:36] = s.recv_wopt[9].msg.fu_in[1]
      s.s_DOT_recv_wopt_LB_9_RB__DOT_msg[36:39] = s.recv_wopt[9].msg.fu_in[2]
      s.s_DOT_recv_wopt_LB_9_RB__DOT_msg[39:42] = s.recv_wopt[9].msg.fu_in[3]
      s.s_DOT_recv_wopt_LB_9_RB__DOT_msg[42:43] = s.recv_wopt[9].msg.predicate
      s.s_DOT_recv_wopt_LB_9_RB__DOT_msg[43:49] = s.recv_wopt[9].msg.ctrl
    s.s_DOT_recv_wopt_LB_10_RB__DOT_msg = Wire( Bits49 )
    @s.update
    def istruct_s_DOT_recv_wopt_LB_10_RB__DOT_msg():
      s.s_DOT_recv_wopt_LB_10_RB__DOT_msg[0:1] = s.recv_wopt[10].msg.predicate_in[0]
      s.s_DOT_recv_wopt_LB_10_RB__DOT_msg[1:2] = s.recv_wopt[10].msg.predicate_in[1]
      s.s_DOT_recv_wopt_LB_10_RB__DOT_msg[2:3] = s.recv_wopt[10].msg.predicate_in[2]
      s.s_DOT_recv_wopt_LB_10_RB__DOT_msg[3:4] = s.recv_wopt[10].msg.predicate_in[3]
      s.s_DOT_recv_wopt_LB_10_RB__DOT_msg[4:5] = s.recv_wopt[10].msg.predicate_in[4]
      s.s_DOT_recv_wopt_LB_10_RB__DOT_msg[5:6] = s.recv_wopt[10].msg.predicate_in[5]
      s.s_DOT_recv_wopt_LB_10_RB__DOT_msg[6:9] = s.recv_wopt[10].msg.outport[0]
      s.s_DOT_recv_wopt_LB_10_RB__DOT_msg[9:12] = s.recv_wopt[10].msg.outport[1]
      s.s_DOT_recv_wopt_LB_10_RB__DOT_msg[12:15] = s.recv_wopt[10].msg.outport[2]
      s.s_DOT_recv_wopt_LB_10_RB__DOT_msg[15:18] = s.recv_wopt[10].msg.outport[3]
      s.s_DOT_recv_wopt_LB_10_RB__DOT_msg[18:21] = s.recv_wopt[10].msg.outport[4]
      s.s_DOT_recv_wopt_LB_10_RB__DOT_msg[21:24] = s.recv_wopt[10].msg.outport[5]
      s.s_DOT_recv_wopt_LB_10_RB__DOT_msg[24:27] = s.recv_wopt[10].msg.outport[6]
      s.s_DOT_recv_wopt_LB_10_RB__DOT_msg[27:30] = s.recv_wopt[10].msg.outport[7]
      s.s_DOT_recv_wopt_LB_10_RB__DOT_msg[30:33] = s.recv_wopt[10].msg.fu_in[0]
      s.s_DOT_recv_wopt_LB_10_RB__DOT_msg[33:36] = s.recv_wopt[10].msg.fu_in[1]
      s.s_DOT_recv_wopt_LB_10_RB__DOT_msg[36:39] = s.recv_wopt[10].msg.fu_in[2]
      s.s_DOT_recv_wopt_LB_10_RB__DOT_msg[39:42] = s.recv_wopt[10].msg.fu_in[3]
      s.s_DOT_recv_wopt_LB_10_RB__DOT_msg[42:43] = s.recv_wopt[10].msg.predicate
      s.s_DOT_recv_wopt_LB_10_RB__DOT_msg[43:49] = s.recv_wopt[10].msg.ctrl
    s.s_DOT_recv_wopt_LB_11_RB__DOT_msg = Wire( Bits49 )
    @s.update
    def istruct_s_DOT_recv_wopt_LB_11_RB__DOT_msg():
      s.s_DOT_recv_wopt_LB_11_RB__DOT_msg[0:1] = s.recv_wopt[11].msg.predicate_in[0]
      s.s_DOT_recv_wopt_LB_11_RB__DOT_msg[1:2] = s.recv_wopt[11].msg.predicate_in[1]
      s.s_DOT_recv_wopt_LB_11_RB__DOT_msg[2:3] = s.recv_wopt[11].msg.predicate_in[2]
      s.s_DOT_recv_wopt_LB_11_RB__DOT_msg[3:4] = s.recv_wopt[11].msg.predicate_in[3]
      s.s_DOT_recv_wopt_LB_11_RB__DOT_msg[4:5] = s.recv_wopt[11].msg.predicate_in[4]
      s.s_DOT_recv_wopt_LB_11_RB__DOT_msg[5:6] = s.recv_wopt[11].msg.predicate_in[5]
      s.s_DOT_recv_wopt_LB_11_RB__DOT_msg[6:9] = s.recv_wopt[11].msg.outport[0]
      s.s_DOT_recv_wopt_LB_11_RB__DOT_msg[9:12] = s.recv_wopt[11].msg.outport[1]
      s.s_DOT_recv_wopt_LB_11_RB__DOT_msg[12:15] = s.recv_wopt[11].msg.outport[2]
      s.s_DOT_recv_wopt_LB_11_RB__DOT_msg[15:18] = s.recv_wopt[11].msg.outport[3]
      s.s_DOT_recv_wopt_LB_11_RB__DOT_msg[18:21] = s.recv_wopt[11].msg.outport[4]
      s.s_DOT_recv_wopt_LB_11_RB__DOT_msg[21:24] = s.recv_wopt[11].msg.outport[5]
      s.s_DOT_recv_wopt_LB_11_RB__DOT_msg[24:27] = s.recv_wopt[11].msg.outport[6]
      s.s_DOT_recv_wopt_LB_11_RB__DOT_msg[27:30] = s.recv_wopt[11].msg.outport[7]
      s.s_DOT_recv_wopt_LB_11_RB__DOT_msg[30:33] = s.recv_wopt[11].msg.fu_in[0]
      s.s_DOT_recv_wopt_LB_11_RB__DOT_msg[33:36] = s.recv_wopt[11].msg.fu_in[1]
      s.s_DOT_recv_wopt_LB_11_RB__DOT_msg[36:39] = s.recv_wopt[11].msg.fu_in[2]
      s.s_DOT_recv_wopt_LB_11_RB__DOT_msg[39:42] = s.recv_wopt[11].msg.fu_in[3]
      s.s_DOT_recv_wopt_LB_11_RB__DOT_msg[42:43] = s.recv_wopt[11].msg.predicate
      s.s_DOT_recv_wopt_LB_11_RB__DOT_msg[43:49] = s.recv_wopt[11].msg.ctrl
    s.s_DOT_recv_wopt_LB_12_RB__DOT_msg = Wire( Bits49 )
    @s.update
    def istruct_s_DOT_recv_wopt_LB_12_RB__DOT_msg():
      s.s_DOT_recv_wopt_LB_12_RB__DOT_msg[0:1] = s.recv_wopt[12].msg.predicate_in[0]
      s.s_DOT_recv_wopt_LB_12_RB__DOT_msg[1:2] = s.recv_wopt[12].msg.predicate_in[1]
      s.s_DOT_recv_wopt_LB_12_RB__DOT_msg[2:3] = s.recv_wopt[12].msg.predicate_in[2]
      s.s_DOT_recv_wopt_LB_12_RB__DOT_msg[3:4] = s.recv_wopt[12].msg.predicate_in[3]
      s.s_DOT_recv_wopt_LB_12_RB__DOT_msg[4:5] = s.recv_wopt[12].msg.predicate_in[4]
      s.s_DOT_recv_wopt_LB_12_RB__DOT_msg[5:6] = s.recv_wopt[12].msg.predicate_in[5]
      s.s_DOT_recv_wopt_LB_12_RB__DOT_msg[6:9] = s.recv_wopt[12].msg.outport[0]
      s.s_DOT_recv_wopt_LB_12_RB__DOT_msg[9:12] = s.recv_wopt[12].msg.outport[1]
      s.s_DOT_recv_wopt_LB_12_RB__DOT_msg[12:15] = s.recv_wopt[12].msg.outport[2]
      s.s_DOT_recv_wopt_LB_12_RB__DOT_msg[15:18] = s.recv_wopt[12].msg.outport[3]
      s.s_DOT_recv_wopt_LB_12_RB__DOT_msg[18:21] = s.recv_wopt[12].msg.outport[4]
      s.s_DOT_recv_wopt_LB_12_RB__DOT_msg[21:24] = s.recv_wopt[12].msg.outport[5]
      s.s_DOT_recv_wopt_LB_12_RB__DOT_msg[24:27] = s.recv_wopt[12].msg.outport[6]
      s.s_DOT_recv_wopt_LB_12_RB__DOT_msg[27:30] = s.recv_wopt[12].msg.outport[7]
      s.s_DOT_recv_wopt_LB_12_RB__DOT_msg[30:33] = s.recv_wopt[12].msg.fu_in[0]
      s.s_DOT_recv_wopt_LB_12_RB__DOT_msg[33:36] = s.recv_wopt[12].msg.fu_in[1]
      s.s_DOT_recv_wopt_LB_12_RB__DOT_msg[36:39] = s.recv_wopt[12].msg.fu_in[2]
      s.s_DOT_recv_wopt_LB_12_RB__DOT_msg[39:42] = s.recv_wopt[12].msg.fu_in[3]
      s.s_DOT_recv_wopt_LB_12_RB__DOT_msg[42:43] = s.recv_wopt[12].msg.predicate
      s.s_DOT_recv_wopt_LB_12_RB__DOT_msg[43:49] = s.recv_wopt[12].msg.ctrl
    s.s_DOT_recv_wopt_LB_13_RB__DOT_msg = Wire( Bits49 )
    @s.update
    def istruct_s_DOT_recv_wopt_LB_13_RB__DOT_msg():
      s.s_DOT_recv_wopt_LB_13_RB__DOT_msg[0:1] = s.recv_wopt[13].msg.predicate_in[0]
      s.s_DOT_recv_wopt_LB_13_RB__DOT_msg[1:2] = s.recv_wopt[13].msg.predicate_in[1]
      s.s_DOT_recv_wopt_LB_13_RB__DOT_msg[2:3] = s.recv_wopt[13].msg.predicate_in[2]
      s.s_DOT_recv_wopt_LB_13_RB__DOT_msg[3:4] = s.recv_wopt[13].msg.predicate_in[3]
      s.s_DOT_recv_wopt_LB_13_RB__DOT_msg[4:5] = s.recv_wopt[13].msg.predicate_in[4]
      s.s_DOT_recv_wopt_LB_13_RB__DOT_msg[5:6] = s.recv_wopt[13].msg.predicate_in[5]
      s.s_DOT_recv_wopt_LB_13_RB__DOT_msg[6:9] = s.recv_wopt[13].msg.outport[0]
      s.s_DOT_recv_wopt_LB_13_RB__DOT_msg[9:12] = s.recv_wopt[13].msg.outport[1]
      s.s_DOT_recv_wopt_LB_13_RB__DOT_msg[12:15] = s.recv_wopt[13].msg.outport[2]
      s.s_DOT_recv_wopt_LB_13_RB__DOT_msg[15:18] = s.recv_wopt[13].msg.outport[3]
      s.s_DOT_recv_wopt_LB_13_RB__DOT_msg[18:21] = s.recv_wopt[13].msg.outport[4]
      s.s_DOT_recv_wopt_LB_13_RB__DOT_msg[21:24] = s.recv_wopt[13].msg.outport[5]
      s.s_DOT_recv_wopt_LB_13_RB__DOT_msg[24:27] = s.recv_wopt[13].msg.outport[6]
      s.s_DOT_recv_wopt_LB_13_RB__DOT_msg[27:30] = s.recv_wopt[13].msg.outport[7]
      s.s_DOT_recv_wopt_LB_13_RB__DOT_msg[30:33] = s.recv_wopt[13].msg.fu_in[0]
      s.s_DOT_recv_wopt_LB_13_RB__DOT_msg[33:36] = s.recv_wopt[13].msg.fu_in[1]
      s.s_DOT_recv_wopt_LB_13_RB__DOT_msg[36:39] = s.recv_wopt[13].msg.fu_in[2]
      s.s_DOT_recv_wopt_LB_13_RB__DOT_msg[39:42] = s.recv_wopt[13].msg.fu_in[3]
      s.s_DOT_recv_wopt_LB_13_RB__DOT_msg[42:43] = s.recv_wopt[13].msg.predicate
      s.s_DOT_recv_wopt_LB_13_RB__DOT_msg[43:49] = s.recv_wopt[13].msg.ctrl
    s.s_DOT_recv_wopt_LB_14_RB__DOT_msg = Wire( Bits49 )
    @s.update
    def istruct_s_DOT_recv_wopt_LB_14_RB__DOT_msg():
      s.s_DOT_recv_wopt_LB_14_RB__DOT_msg[0:1] = s.recv_wopt[14].msg.predicate_in[0]
      s.s_DOT_recv_wopt_LB_14_RB__DOT_msg[1:2] = s.recv_wopt[14].msg.predicate_in[1]
      s.s_DOT_recv_wopt_LB_14_RB__DOT_msg[2:3] = s.recv_wopt[14].msg.predicate_in[2]
      s.s_DOT_recv_wopt_LB_14_RB__DOT_msg[3:4] = s.recv_wopt[14].msg.predicate_in[3]
      s.s_DOT_recv_wopt_LB_14_RB__DOT_msg[4:5] = s.recv_wopt[14].msg.predicate_in[4]
      s.s_DOT_recv_wopt_LB_14_RB__DOT_msg[5:6] = s.recv_wopt[14].msg.predicate_in[5]
      s.s_DOT_recv_wopt_LB_14_RB__DOT_msg[6:9] = s.recv_wopt[14].msg.outport[0]
      s.s_DOT_recv_wopt_LB_14_RB__DOT_msg[9:12] = s.recv_wopt[14].msg.outport[1]
      s.s_DOT_recv_wopt_LB_14_RB__DOT_msg[12:15] = s.recv_wopt[14].msg.outport[2]
      s.s_DOT_recv_wopt_LB_14_RB__DOT_msg[15:18] = s.recv_wopt[14].msg.outport[3]
      s.s_DOT_recv_wopt_LB_14_RB__DOT_msg[18:21] = s.recv_wopt[14].msg.outport[4]
      s.s_DOT_recv_wopt_LB_14_RB__DOT_msg[21:24] = s.recv_wopt[14].msg.outport[5]
      s.s_DOT_recv_wopt_LB_14_RB__DOT_msg[24:27] = s.recv_wopt[14].msg.outport[6]
      s.s_DOT_recv_wopt_LB_14_RB__DOT_msg[27:30] = s.recv_wopt[14].msg.outport[7]
      s.s_DOT_recv_wopt_LB_14_RB__DOT_msg[30:33] = s.recv_wopt[14].msg.fu_in[0]
      s.s_DOT_recv_wopt_LB_14_RB__DOT_msg[33:36] = s.recv_wopt[14].msg.fu_in[1]
      s.s_DOT_recv_wopt_LB_14_RB__DOT_msg[36:39] = s.recv_wopt[14].msg.fu_in[2]
      s.s_DOT_recv_wopt_LB_14_RB__DOT_msg[39:42] = s.recv_wopt[14].msg.fu_in[3]
      s.s_DOT_recv_wopt_LB_14_RB__DOT_msg[42:43] = s.recv_wopt[14].msg.predicate
      s.s_DOT_recv_wopt_LB_14_RB__DOT_msg[43:49] = s.recv_wopt[14].msg.ctrl
    s.s_DOT_recv_wopt_LB_15_RB__DOT_msg = Wire( Bits49 )
    @s.update
    def istruct_s_DOT_recv_wopt_LB_15_RB__DOT_msg():
      s.s_DOT_recv_wopt_LB_15_RB__DOT_msg[0:1] = s.recv_wopt[15].msg.predicate_in[0]
      s.s_DOT_recv_wopt_LB_15_RB__DOT_msg[1:2] = s.recv_wopt[15].msg.predicate_in[1]
      s.s_DOT_recv_wopt_LB_15_RB__DOT_msg[2:3] = s.recv_wopt[15].msg.predicate_in[2]
      s.s_DOT_recv_wopt_LB_15_RB__DOT_msg[3:4] = s.recv_wopt[15].msg.predicate_in[3]
      s.s_DOT_recv_wopt_LB_15_RB__DOT_msg[4:5] = s.recv_wopt[15].msg.predicate_in[4]
      s.s_DOT_recv_wopt_LB_15_RB__DOT_msg[5:6] = s.recv_wopt[15].msg.predicate_in[5]
      s.s_DOT_recv_wopt_LB_15_RB__DOT_msg[6:9] = s.recv_wopt[15].msg.outport[0]
      s.s_DOT_recv_wopt_LB_15_RB__DOT_msg[9:12] = s.recv_wopt[15].msg.outport[1]
      s.s_DOT_recv_wopt_LB_15_RB__DOT_msg[12:15] = s.recv_wopt[15].msg.outport[2]
      s.s_DOT_recv_wopt_LB_15_RB__DOT_msg[15:18] = s.recv_wopt[15].msg.outport[3]
      s.s_DOT_recv_wopt_LB_15_RB__DOT_msg[18:21] = s.recv_wopt[15].msg.outport[4]
      s.s_DOT_recv_wopt_LB_15_RB__DOT_msg[21:24] = s.recv_wopt[15].msg.outport[5]
      s.s_DOT_recv_wopt_LB_15_RB__DOT_msg[24:27] = s.recv_wopt[15].msg.outport[6]
      s.s_DOT_recv_wopt_LB_15_RB__DOT_msg[27:30] = s.recv_wopt[15].msg.outport[7]
      s.s_DOT_recv_wopt_LB_15_RB__DOT_msg[30:33] = s.recv_wopt[15].msg.fu_in[0]
      s.s_DOT_recv_wopt_LB_15_RB__DOT_msg[33:36] = s.recv_wopt[15].msg.fu_in[1]
      s.s_DOT_recv_wopt_LB_15_RB__DOT_msg[36:39] = s.recv_wopt[15].msg.fu_in[2]
      s.s_DOT_recv_wopt_LB_15_RB__DOT_msg[39:42] = s.recv_wopt[15].msg.fu_in[3]
      s.s_DOT_recv_wopt_LB_15_RB__DOT_msg[42:43] = s.recv_wopt[15].msg.predicate
      s.s_DOT_recv_wopt_LB_15_RB__DOT_msg[43:49] = s.recv_wopt[15].msg.ctrl
    s.s_DOT_recv_waddr_LB_0_RB__DOT_rdy = Wire( Bits1 )
    @s.update
    def osignal_s_DOT_recv_waddr_LB_0_RB__DOT_rdy():
      s.recv_waddr[0].rdy = s.s_DOT_recv_waddr_LB_0_RB__DOT_rdy
    s.s_DOT_recv_waddr_LB_1_RB__DOT_rdy = Wire( Bits1 )
    @s.update
    def osignal_s_DOT_recv_waddr_LB_1_RB__DOT_rdy():
      s.recv_waddr[1].rdy = s.s_DOT_recv_waddr_LB_1_RB__DOT_rdy
    s.s_DOT_recv_waddr_LB_2_RB__DOT_rdy = Wire( Bits1 )
    @s.update
    def osignal_s_DOT_recv_waddr_LB_2_RB__DOT_rdy():
      s.recv_waddr[2].rdy = s.s_DOT_recv_waddr_LB_2_RB__DOT_rdy
    s.s_DOT_recv_waddr_LB_3_RB__DOT_rdy = Wire( Bits1 )
    @s.update
    def osignal_s_DOT_recv_waddr_LB_3_RB__DOT_rdy():
      s.recv_waddr[3].rdy = s.s_DOT_recv_waddr_LB_3_RB__DOT_rdy
    s.s_DOT_recv_waddr_LB_4_RB__DOT_rdy = Wire( Bits1 )
    @s.update
    def osignal_s_DOT_recv_waddr_LB_4_RB__DOT_rdy():
      s.recv_waddr[4].rdy = s.s_DOT_recv_waddr_LB_4_RB__DOT_rdy
    s.s_DOT_recv_waddr_LB_5_RB__DOT_rdy = Wire( Bits1 )
    @s.update
    def osignal_s_DOT_recv_waddr_LB_5_RB__DOT_rdy():
      s.recv_waddr[5].rdy = s.s_DOT_recv_waddr_LB_5_RB__DOT_rdy
    s.s_DOT_recv_waddr_LB_6_RB__DOT_rdy = Wire( Bits1 )
    @s.update
    def osignal_s_DOT_recv_waddr_LB_6_RB__DOT_rdy():
      s.recv_waddr[6].rdy = s.s_DOT_recv_waddr_LB_6_RB__DOT_rdy
    s.s_DOT_recv_waddr_LB_7_RB__DOT_rdy = Wire( Bits1 )
    @s.update
    def osignal_s_DOT_recv_waddr_LB_7_RB__DOT_rdy():
      s.recv_waddr[7].rdy = s.s_DOT_recv_waddr_LB_7_RB__DOT_rdy
    s.s_DOT_recv_waddr_LB_8_RB__DOT_rdy = Wire( Bits1 )
    @s.update
    def osignal_s_DOT_recv_waddr_LB_8_RB__DOT_rdy():
      s.recv_waddr[8].rdy = s.s_DOT_recv_waddr_LB_8_RB__DOT_rdy
    s.s_DOT_recv_waddr_LB_9_RB__DOT_rdy = Wire( Bits1 )
    @s.update
    def osignal_s_DOT_recv_waddr_LB_9_RB__DOT_rdy():
      s.recv_waddr[9].rdy = s.s_DOT_recv_waddr_LB_9_RB__DOT_rdy
    s.s_DOT_recv_waddr_LB_10_RB__DOT_rdy = Wire( Bits1 )
    @s.update
    def osignal_s_DOT_recv_waddr_LB_10_RB__DOT_rdy():
      s.recv_waddr[10].rdy = s.s_DOT_recv_waddr_LB_10_RB__DOT_rdy
    s.s_DOT_recv_waddr_LB_11_RB__DOT_rdy = Wire( Bits1 )
    @s.update
    def osignal_s_DOT_recv_waddr_LB_11_RB__DOT_rdy():
      s.recv_waddr[11].rdy = s.s_DOT_recv_waddr_LB_11_RB__DOT_rdy
    s.s_DOT_recv_waddr_LB_12_RB__DOT_rdy = Wire( Bits1 )
    @s.update
    def osignal_s_DOT_recv_waddr_LB_12_RB__DOT_rdy():
      s.recv_waddr[12].rdy = s.s_DOT_recv_waddr_LB_12_RB__DOT_rdy
    s.s_DOT_recv_waddr_LB_13_RB__DOT_rdy = Wire( Bits1 )
    @s.update
    def osignal_s_DOT_recv_waddr_LB_13_RB__DOT_rdy():
      s.recv_waddr[13].rdy = s.s_DOT_recv_waddr_LB_13_RB__DOT_rdy
    s.s_DOT_recv_waddr_LB_14_RB__DOT_rdy = Wire( Bits1 )
    @s.update
    def osignal_s_DOT_recv_waddr_LB_14_RB__DOT_rdy():
      s.recv_waddr[14].rdy = s.s_DOT_recv_waddr_LB_14_RB__DOT_rdy
    s.s_DOT_recv_waddr_LB_15_RB__DOT_rdy = Wire( Bits1 )
    @s.update
    def osignal_s_DOT_recv_waddr_LB_15_RB__DOT_rdy():
      s.recv_waddr[15].rdy = s.s_DOT_recv_waddr_LB_15_RB__DOT_rdy
    s.s_DOT_recv_wopt_LB_0_RB__DOT_rdy = Wire( Bits1 )
    @s.update
    def osignal_s_DOT_recv_wopt_LB_0_RB__DOT_rdy():
      s.recv_wopt[0].rdy = s.s_DOT_recv_wopt_LB_0_RB__DOT_rdy
    s.s_DOT_recv_wopt_LB_1_RB__DOT_rdy = Wire( Bits1 )
    @s.update
    def osignal_s_DOT_recv_wopt_LB_1_RB__DOT_rdy():
      s.recv_wopt[1].rdy = s.s_DOT_recv_wopt_LB_1_RB__DOT_rdy
    s.s_DOT_recv_wopt_LB_2_RB__DOT_rdy = Wire( Bits1 )
    @s.update
    def osignal_s_DOT_recv_wopt_LB_2_RB__DOT_rdy():
      s.recv_wopt[2].rdy = s.s_DOT_recv_wopt_LB_2_RB__DOT_rdy
    s.s_DOT_recv_wopt_LB_3_RB__DOT_rdy = Wire( Bits1 )
    @s.update
    def osignal_s_DOT_recv_wopt_LB_3_RB__DOT_rdy():
      s.recv_wopt[3].rdy = s.s_DOT_recv_wopt_LB_3_RB__DOT_rdy
    s.s_DOT_recv_wopt_LB_4_RB__DOT_rdy = Wire( Bits1 )
    @s.update
    def osignal_s_DOT_recv_wopt_LB_4_RB__DOT_rdy():
      s.recv_wopt[4].rdy = s.s_DOT_recv_wopt_LB_4_RB__DOT_rdy
    s.s_DOT_recv_wopt_LB_5_RB__DOT_rdy = Wire( Bits1 )
    @s.update
    def osignal_s_DOT_recv_wopt_LB_5_RB__DOT_rdy():
      s.recv_wopt[5].rdy = s.s_DOT_recv_wopt_LB_5_RB__DOT_rdy
    s.s_DOT_recv_wopt_LB_6_RB__DOT_rdy = Wire( Bits1 )
    @s.update
    def osignal_s_DOT_recv_wopt_LB_6_RB__DOT_rdy():
      s.recv_wopt[6].rdy = s.s_DOT_recv_wopt_LB_6_RB__DOT_rdy
    s.s_DOT_recv_wopt_LB_7_RB__DOT_rdy = Wire( Bits1 )
    @s.update
    def osignal_s_DOT_recv_wopt_LB_7_RB__DOT_rdy():
      s.recv_wopt[7].rdy = s.s_DOT_recv_wopt_LB_7_RB__DOT_rdy
    s.s_DOT_recv_wopt_LB_8_RB__DOT_rdy = Wire( Bits1 )
    @s.update
    def osignal_s_DOT_recv_wopt_LB_8_RB__DOT_rdy():
      s.recv_wopt[8].rdy = s.s_DOT_recv_wopt_LB_8_RB__DOT_rdy
    s.s_DOT_recv_wopt_LB_9_RB__DOT_rdy = Wire( Bits1 )
    @s.update
    def osignal_s_DOT_recv_wopt_LB_9_RB__DOT_rdy():
      s.recv_wopt[9].rdy = s.s_DOT_recv_wopt_LB_9_RB__DOT_rdy
    s.s_DOT_recv_wopt_LB_10_RB__DOT_rdy = Wire( Bits1 )
    @s.update
    def osignal_s_DOT_recv_wopt_LB_10_RB__DOT_rdy():
      s.recv_wopt[10].rdy = s.s_DOT_recv_wopt_LB_10_RB__DOT_rdy
    s.s_DOT_recv_wopt_LB_11_RB__DOT_rdy = Wire( Bits1 )
    @s.update
    def osignal_s_DOT_recv_wopt_LB_11_RB__DOT_rdy():
      s.recv_wopt[11].rdy = s.s_DOT_recv_wopt_LB_11_RB__DOT_rdy
    s.s_DOT_recv_wopt_LB_12_RB__DOT_rdy = Wire( Bits1 )
    @s.update
    def osignal_s_DOT_recv_wopt_LB_12_RB__DOT_rdy():
      s.recv_wopt[12].rdy = s.s_DOT_recv_wopt_LB_12_RB__DOT_rdy
    s.s_DOT_recv_wopt_LB_13_RB__DOT_rdy = Wire( Bits1 )
    @s.update
    def osignal_s_DOT_recv_wopt_LB_13_RB__DOT_rdy():
      s.recv_wopt[13].rdy = s.s_DOT_recv_wopt_LB_13_RB__DOT_rdy
    s.s_DOT_recv_wopt_LB_14_RB__DOT_rdy = Wire( Bits1 )
    @s.update
    def osignal_s_DOT_recv_wopt_LB_14_RB__DOT_rdy():
      s.recv_wopt[14].rdy = s.s_DOT_recv_wopt_LB_14_RB__DOT_rdy
    s.s_DOT_recv_wopt_LB_15_RB__DOT_rdy = Wire( Bits1 )
    @s.update
    def osignal_s_DOT_recv_wopt_LB_15_RB__DOT_rdy():
      s.recv_wopt[15].rdy = s.s_DOT_recv_wopt_LB_15_RB__DOT_rdy

    @s.update
    def comb_upblk():
      # Set inputs
      _ffi_m.reset[0] = int(s.s_DOT_reset)
      _ffi_m.recv_waddr___05Fen[0][0] = int(s.s_DOT_recv_waddr_LB_0_RB__DOT_en)
      _ffi_m.recv_waddr___05Fen[1][0] = int(s.s_DOT_recv_waddr_LB_1_RB__DOT_en)
      _ffi_m.recv_waddr___05Fen[2][0] = int(s.s_DOT_recv_waddr_LB_2_RB__DOT_en)
      _ffi_m.recv_waddr___05Fen[3][0] = int(s.s_DOT_recv_waddr_LB_3_RB__DOT_en)
      _ffi_m.recv_waddr___05Fen[4][0] = int(s.s_DOT_recv_waddr_LB_4_RB__DOT_en)
      _ffi_m.recv_waddr___05Fen[5][0] = int(s.s_DOT_recv_waddr_LB_5_RB__DOT_en)
      _ffi_m.recv_waddr___05Fen[6][0] = int(s.s_DOT_recv_waddr_LB_6_RB__DOT_en)
      _ffi_m.recv_waddr___05Fen[7][0] = int(s.s_DOT_recv_waddr_LB_7_RB__DOT_en)
      _ffi_m.recv_waddr___05Fen[8][0] = int(s.s_DOT_recv_waddr_LB_8_RB__DOT_en)
      _ffi_m.recv_waddr___05Fen[9][0] = int(s.s_DOT_recv_waddr_LB_9_RB__DOT_en)
      _ffi_m.recv_waddr___05Fen[10][0] = int(s.s_DOT_recv_waddr_LB_10_RB__DOT_en)
      _ffi_m.recv_waddr___05Fen[11][0] = int(s.s_DOT_recv_waddr_LB_11_RB__DOT_en)
      _ffi_m.recv_waddr___05Fen[12][0] = int(s.s_DOT_recv_waddr_LB_12_RB__DOT_en)
      _ffi_m.recv_waddr___05Fen[13][0] = int(s.s_DOT_recv_waddr_LB_13_RB__DOT_en)
      _ffi_m.recv_waddr___05Fen[14][0] = int(s.s_DOT_recv_waddr_LB_14_RB__DOT_en)
      _ffi_m.recv_waddr___05Fen[15][0] = int(s.s_DOT_recv_waddr_LB_15_RB__DOT_en)
      _ffi_m.recv_waddr___05Fmsg[0][0] = int(s.s_DOT_recv_waddr_LB_0_RB__DOT_msg)
      _ffi_m.recv_waddr___05Fmsg[1][0] = int(s.s_DOT_recv_waddr_LB_1_RB__DOT_msg)
      _ffi_m.recv_waddr___05Fmsg[2][0] = int(s.s_DOT_recv_waddr_LB_2_RB__DOT_msg)
      _ffi_m.recv_waddr___05Fmsg[3][0] = int(s.s_DOT_recv_waddr_LB_3_RB__DOT_msg)
      _ffi_m.recv_waddr___05Fmsg[4][0] = int(s.s_DOT_recv_waddr_LB_4_RB__DOT_msg)
      _ffi_m.recv_waddr___05Fmsg[5][0] = int(s.s_DOT_recv_waddr_LB_5_RB__DOT_msg)
      _ffi_m.recv_waddr___05Fmsg[6][0] = int(s.s_DOT_recv_waddr_LB_6_RB__DOT_msg)
      _ffi_m.recv_waddr___05Fmsg[7][0] = int(s.s_DOT_recv_waddr_LB_7_RB__DOT_msg)
      _ffi_m.recv_waddr___05Fmsg[8][0] = int(s.s_DOT_recv_waddr_LB_8_RB__DOT_msg)
      _ffi_m.recv_waddr___05Fmsg[9][0] = int(s.s_DOT_recv_waddr_LB_9_RB__DOT_msg)
      _ffi_m.recv_waddr___05Fmsg[10][0] = int(s.s_DOT_recv_waddr_LB_10_RB__DOT_msg)
      _ffi_m.recv_waddr___05Fmsg[11][0] = int(s.s_DOT_recv_waddr_LB_11_RB__DOT_msg)
      _ffi_m.recv_waddr___05Fmsg[12][0] = int(s.s_DOT_recv_waddr_LB_12_RB__DOT_msg)
      _ffi_m.recv_waddr___05Fmsg[13][0] = int(s.s_DOT_recv_waddr_LB_13_RB__DOT_msg)
      _ffi_m.recv_waddr___05Fmsg[14][0] = int(s.s_DOT_recv_waddr_LB_14_RB__DOT_msg)
      _ffi_m.recv_waddr___05Fmsg[15][0] = int(s.s_DOT_recv_waddr_LB_15_RB__DOT_msg)
      _ffi_m.recv_wopt___05Fen[0][0] = int(s.s_DOT_recv_wopt_LB_0_RB__DOT_en)
      _ffi_m.recv_wopt___05Fen[1][0] = int(s.s_DOT_recv_wopt_LB_1_RB__DOT_en)
      _ffi_m.recv_wopt___05Fen[2][0] = int(s.s_DOT_recv_wopt_LB_2_RB__DOT_en)
      _ffi_m.recv_wopt___05Fen[3][0] = int(s.s_DOT_recv_wopt_LB_3_RB__DOT_en)
      _ffi_m.recv_wopt___05Fen[4][0] = int(s.s_DOT_recv_wopt_LB_4_RB__DOT_en)
      _ffi_m.recv_wopt___05Fen[5][0] = int(s.s_DOT_recv_wopt_LB_5_RB__DOT_en)
      _ffi_m.recv_wopt___05Fen[6][0] = int(s.s_DOT_recv_wopt_LB_6_RB__DOT_en)
      _ffi_m.recv_wopt___05Fen[7][0] = int(s.s_DOT_recv_wopt_LB_7_RB__DOT_en)
      _ffi_m.recv_wopt___05Fen[8][0] = int(s.s_DOT_recv_wopt_LB_8_RB__DOT_en)
      _ffi_m.recv_wopt___05Fen[9][0] = int(s.s_DOT_recv_wopt_LB_9_RB__DOT_en)
      _ffi_m.recv_wopt___05Fen[10][0] = int(s.s_DOT_recv_wopt_LB_10_RB__DOT_en)
      _ffi_m.recv_wopt___05Fen[11][0] = int(s.s_DOT_recv_wopt_LB_11_RB__DOT_en)
      _ffi_m.recv_wopt___05Fen[12][0] = int(s.s_DOT_recv_wopt_LB_12_RB__DOT_en)
      _ffi_m.recv_wopt___05Fen[13][0] = int(s.s_DOT_recv_wopt_LB_13_RB__DOT_en)
      _ffi_m.recv_wopt___05Fen[14][0] = int(s.s_DOT_recv_wopt_LB_14_RB__DOT_en)
      _ffi_m.recv_wopt___05Fen[15][0] = int(s.s_DOT_recv_wopt_LB_15_RB__DOT_en)
      _ffi_m.recv_wopt___05Fmsg[0][0] = int(s.s_DOT_recv_wopt_LB_0_RB__DOT_msg)
      _ffi_m.recv_wopt___05Fmsg[1][0] = int(s.s_DOT_recv_wopt_LB_1_RB__DOT_msg)
      _ffi_m.recv_wopt___05Fmsg[2][0] = int(s.s_DOT_recv_wopt_LB_2_RB__DOT_msg)
      _ffi_m.recv_wopt___05Fmsg[3][0] = int(s.s_DOT_recv_wopt_LB_3_RB__DOT_msg)
      _ffi_m.recv_wopt___05Fmsg[4][0] = int(s.s_DOT_recv_wopt_LB_4_RB__DOT_msg)
      _ffi_m.recv_wopt___05Fmsg[5][0] = int(s.s_DOT_recv_wopt_LB_5_RB__DOT_msg)
      _ffi_m.recv_wopt___05Fmsg[6][0] = int(s.s_DOT_recv_wopt_LB_6_RB__DOT_msg)
      _ffi_m.recv_wopt___05Fmsg[7][0] = int(s.s_DOT_recv_wopt_LB_7_RB__DOT_msg)
      _ffi_m.recv_wopt___05Fmsg[8][0] = int(s.s_DOT_recv_wopt_LB_8_RB__DOT_msg)
      _ffi_m.recv_wopt___05Fmsg[9][0] = int(s.s_DOT_recv_wopt_LB_9_RB__DOT_msg)
      _ffi_m.recv_wopt___05Fmsg[10][0] = int(s.s_DOT_recv_wopt_LB_10_RB__DOT_msg)
      _ffi_m.recv_wopt___05Fmsg[11][0] = int(s.s_DOT_recv_wopt_LB_11_RB__DOT_msg)
      _ffi_m.recv_wopt___05Fmsg[12][0] = int(s.s_DOT_recv_wopt_LB_12_RB__DOT_msg)
      _ffi_m.recv_wopt___05Fmsg[13][0] = int(s.s_DOT_recv_wopt_LB_13_RB__DOT_msg)
      _ffi_m.recv_wopt___05Fmsg[14][0] = int(s.s_DOT_recv_wopt_LB_14_RB__DOT_msg)
      _ffi_m.recv_wopt___05Fmsg[15][0] = int(s.s_DOT_recv_wopt_LB_15_RB__DOT_msg)

      _ffi_inst.eval( _ffi_m )

      # Write all outputs
      s.s_DOT_recv_waddr_LB_0_RB__DOT_rdy = Bits1(_ffi_m.recv_waddr___05Frdy[0][0])
      s.s_DOT_recv_waddr_LB_1_RB__DOT_rdy = Bits1(_ffi_m.recv_waddr___05Frdy[1][0])
      s.s_DOT_recv_waddr_LB_2_RB__DOT_rdy = Bits1(_ffi_m.recv_waddr___05Frdy[2][0])
      s.s_DOT_recv_waddr_LB_3_RB__DOT_rdy = Bits1(_ffi_m.recv_waddr___05Frdy[3][0])
      s.s_DOT_recv_waddr_LB_4_RB__DOT_rdy = Bits1(_ffi_m.recv_waddr___05Frdy[4][0])
      s.s_DOT_recv_waddr_LB_5_RB__DOT_rdy = Bits1(_ffi_m.recv_waddr___05Frdy[5][0])
      s.s_DOT_recv_waddr_LB_6_RB__DOT_rdy = Bits1(_ffi_m.recv_waddr___05Frdy[6][0])
      s.s_DOT_recv_waddr_LB_7_RB__DOT_rdy = Bits1(_ffi_m.recv_waddr___05Frdy[7][0])
      s.s_DOT_recv_waddr_LB_8_RB__DOT_rdy = Bits1(_ffi_m.recv_waddr___05Frdy[8][0])
      s.s_DOT_recv_waddr_LB_9_RB__DOT_rdy = Bits1(_ffi_m.recv_waddr___05Frdy[9][0])
      s.s_DOT_recv_waddr_LB_10_RB__DOT_rdy = Bits1(_ffi_m.recv_waddr___05Frdy[10][0])
      s.s_DOT_recv_waddr_LB_11_RB__DOT_rdy = Bits1(_ffi_m.recv_waddr___05Frdy[11][0])
      s.s_DOT_recv_waddr_LB_12_RB__DOT_rdy = Bits1(_ffi_m.recv_waddr___05Frdy[12][0])
      s.s_DOT_recv_waddr_LB_13_RB__DOT_rdy = Bits1(_ffi_m.recv_waddr___05Frdy[13][0])
      s.s_DOT_recv_waddr_LB_14_RB__DOT_rdy = Bits1(_ffi_m.recv_waddr___05Frdy[14][0])
      s.s_DOT_recv_waddr_LB_15_RB__DOT_rdy = Bits1(_ffi_m.recv_waddr___05Frdy[15][0])
      s.s_DOT_recv_wopt_LB_0_RB__DOT_rdy = Bits1(_ffi_m.recv_wopt___05Frdy[0][0])
      s.s_DOT_recv_wopt_LB_1_RB__DOT_rdy = Bits1(_ffi_m.recv_wopt___05Frdy[1][0])
      s.s_DOT_recv_wopt_LB_2_RB__DOT_rdy = Bits1(_ffi_m.recv_wopt___05Frdy[2][0])
      s.s_DOT_recv_wopt_LB_3_RB__DOT_rdy = Bits1(_ffi_m.recv_wopt___05Frdy[3][0])
      s.s_DOT_recv_wopt_LB_4_RB__DOT_rdy = Bits1(_ffi_m.recv_wopt___05Frdy[4][0])
      s.s_DOT_recv_wopt_LB_5_RB__DOT_rdy = Bits1(_ffi_m.recv_wopt___05Frdy[5][0])
      s.s_DOT_recv_wopt_LB_6_RB__DOT_rdy = Bits1(_ffi_m.recv_wopt___05Frdy[6][0])
      s.s_DOT_recv_wopt_LB_7_RB__DOT_rdy = Bits1(_ffi_m.recv_wopt___05Frdy[7][0])
      s.s_DOT_recv_wopt_LB_8_RB__DOT_rdy = Bits1(_ffi_m.recv_wopt___05Frdy[8][0])
      s.s_DOT_recv_wopt_LB_9_RB__DOT_rdy = Bits1(_ffi_m.recv_wopt___05Frdy[9][0])
      s.s_DOT_recv_wopt_LB_10_RB__DOT_rdy = Bits1(_ffi_m.recv_wopt___05Frdy[10][0])
      s.s_DOT_recv_wopt_LB_11_RB__DOT_rdy = Bits1(_ffi_m.recv_wopt___05Frdy[11][0])
      s.s_DOT_recv_wopt_LB_12_RB__DOT_rdy = Bits1(_ffi_m.recv_wopt___05Frdy[12][0])
      s.s_DOT_recv_wopt_LB_13_RB__DOT_rdy = Bits1(_ffi_m.recv_wopt___05Frdy[13][0])
      s.s_DOT_recv_wopt_LB_14_RB__DOT_rdy = Bits1(_ffi_m.recv_wopt___05Frdy[14][0])
      s.s_DOT_recv_wopt_LB_15_RB__DOT_rdy = Bits1(_ffi_m.recv_wopt___05Frdy[15][0])

    if 1:
      @s.update_ff
      def seq_upblk():
        # Advance the clock
        _ffi_m.clk[0] = 0
        _ffi_inst.eval( _ffi_m )
        _ffi_m.clk[0] = 1
        _ffi_inst.eval( _ffi_m )

  def assert_en( s, en ):
    # TODO: for verilator, any assertion failure will cause the C simulator
    # to abort, which results in a Python internal error. A better approach
    # is to throw a Python exception at the time of assertion failure.
    # Verilator allows user-defined `stop` function which is called when
    # the simulation is expected to stop due to various reasons. We might
    # be able to raise a Python exception through Python C API (although
    # at this moment I'm not sure if the C API's are compatible between
    # PyPy and CPython).
    assert isinstance( en, bool )
    s._ffi_inst.assert_en( en )

  def line_trace( s ):
    if 0:
      s._ffi_inst.trace( s._ffi_m, s._line_trace_str )
      return s._convert_string( s._line_trace_str ).decode('ascii')
    else:
      return f' clk={s.clk}, reset={s.reset}, recv_waddr[0].en={s.recv_waddr[0].en}, recv_waddr[1].en={s.recv_waddr[1].en}, recv_waddr[2].en={s.recv_waddr[2].en}, recv_waddr[3].en={s.recv_waddr[3].en}, recv_waddr[4].en={s.recv_waddr[4].en}, recv_waddr[5].en={s.recv_waddr[5].en}, recv_waddr[6].en={s.recv_waddr[6].en}, recv_waddr[7].en={s.recv_waddr[7].en}, recv_waddr[8].en={s.recv_waddr[8].en}, recv_waddr[9].en={s.recv_waddr[9].en}, recv_waddr[10].en={s.recv_waddr[10].en}, recv_waddr[11].en={s.recv_waddr[11].en}, recv_waddr[12].en={s.recv_waddr[12].en}, recv_waddr[13].en={s.recv_waddr[13].en}, recv_waddr[14].en={s.recv_waddr[14].en}, recv_waddr[15].en={s.recv_waddr[15].en}, recv_waddr[0].msg={s.recv_waddr[0].msg}, recv_waddr[1].msg={s.recv_waddr[1].msg}, recv_waddr[2].msg={s.recv_waddr[2].msg}, recv_waddr[3].msg={s.recv_waddr[3].msg}, recv_waddr[4].msg={s.recv_waddr[4].msg}, recv_waddr[5].msg={s.recv_waddr[5].msg}, recv_waddr[6].msg={s.recv_waddr[6].msg}, recv_waddr[7].msg={s.recv_waddr[7].msg}, recv_waddr[8].msg={s.recv_waddr[8].msg}, recv_waddr[9].msg={s.recv_waddr[9].msg}, recv_waddr[10].msg={s.recv_waddr[10].msg}, recv_waddr[11].msg={s.recv_waddr[11].msg}, recv_waddr[12].msg={s.recv_waddr[12].msg}, recv_waddr[13].msg={s.recv_waddr[13].msg}, recv_waddr[14].msg={s.recv_waddr[14].msg}, recv_waddr[15].msg={s.recv_waddr[15].msg}, recv_waddr[0].rdy={s.recv_waddr[0].rdy}, recv_waddr[1].rdy={s.recv_waddr[1].rdy}, recv_waddr[2].rdy={s.recv_waddr[2].rdy}, recv_waddr[3].rdy={s.recv_waddr[3].rdy}, recv_waddr[4].rdy={s.recv_waddr[4].rdy}, recv_waddr[5].rdy={s.recv_waddr[5].rdy}, recv_waddr[6].rdy={s.recv_waddr[6].rdy}, recv_waddr[7].rdy={s.recv_waddr[7].rdy}, recv_waddr[8].rdy={s.recv_waddr[8].rdy}, recv_waddr[9].rdy={s.recv_waddr[9].rdy}, recv_waddr[10].rdy={s.recv_waddr[10].rdy}, recv_waddr[11].rdy={s.recv_waddr[11].rdy}, recv_waddr[12].rdy={s.recv_waddr[12].rdy}, recv_waddr[13].rdy={s.recv_waddr[13].rdy}, recv_waddr[14].rdy={s.recv_waddr[14].rdy}, recv_waddr[15].rdy={s.recv_waddr[15].rdy}, recv_wopt[0].en={s.recv_wopt[0].en}, recv_wopt[1].en={s.recv_wopt[1].en}, recv_wopt[2].en={s.recv_wopt[2].en}, recv_wopt[3].en={s.recv_wopt[3].en}, recv_wopt[4].en={s.recv_wopt[4].en}, recv_wopt[5].en={s.recv_wopt[5].en}, recv_wopt[6].en={s.recv_wopt[6].en}, recv_wopt[7].en={s.recv_wopt[7].en}, recv_wopt[8].en={s.recv_wopt[8].en}, recv_wopt[9].en={s.recv_wopt[9].en}, recv_wopt[10].en={s.recv_wopt[10].en}, recv_wopt[11].en={s.recv_wopt[11].en}, recv_wopt[12].en={s.recv_wopt[12].en}, recv_wopt[13].en={s.recv_wopt[13].en}, recv_wopt[14].en={s.recv_wopt[14].en}, recv_wopt[15].en={s.recv_wopt[15].en}, recv_wopt[0].msg={s.recv_wopt[0].msg}, recv_wopt[1].msg={s.recv_wopt[1].msg}, recv_wopt[2].msg={s.recv_wopt[2].msg}, recv_wopt[3].msg={s.recv_wopt[3].msg}, recv_wopt[4].msg={s.recv_wopt[4].msg}, recv_wopt[5].msg={s.recv_wopt[5].msg}, recv_wopt[6].msg={s.recv_wopt[6].msg}, recv_wopt[7].msg={s.recv_wopt[7].msg}, recv_wopt[8].msg={s.recv_wopt[8].msg}, recv_wopt[9].msg={s.recv_wopt[9].msg}, recv_wopt[10].msg={s.recv_wopt[10].msg}, recv_wopt[11].msg={s.recv_wopt[11].msg}, recv_wopt[12].msg={s.recv_wopt[12].msg}, recv_wopt[13].msg={s.recv_wopt[13].msg}, recv_wopt[14].msg={s.recv_wopt[14].msg}, recv_wopt[15].msg={s.recv_wopt[15].msg}, recv_wopt[0].rdy={s.recv_wopt[0].rdy}, recv_wopt[1].rdy={s.recv_wopt[1].rdy}, recv_wopt[2].rdy={s.recv_wopt[2].rdy}, recv_wopt[3].rdy={s.recv_wopt[3].rdy}, recv_wopt[4].rdy={s.recv_wopt[4].rdy}, recv_wopt[5].rdy={s.recv_wopt[5].rdy}, recv_wopt[6].rdy={s.recv_wopt[6].rdy}, recv_wopt[7].rdy={s.recv_wopt[7].rdy}, recv_wopt[8].rdy={s.recv_wopt[8].rdy}, recv_wopt[9].rdy={s.recv_wopt[9].rdy}, recv_wopt[10].rdy={s.recv_wopt[10].rdy}, recv_wopt[11].rdy={s.recv_wopt[11].rdy}, recv_wopt[12].rdy={s.recv_wopt[12].rdy}, recv_wopt[13].rdy={s.recv_wopt[13].rdy}, recv_wopt[14].rdy={s.recv_wopt[14].rdy}, recv_wopt[15].rdy={s.recv_wopt[15].rdy},'

  def internal_line_trace( s ):
    return ''
