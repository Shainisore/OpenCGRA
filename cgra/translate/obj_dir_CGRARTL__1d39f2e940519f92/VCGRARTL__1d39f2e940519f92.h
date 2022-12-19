// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VCGRARTL__1D39F2E940519F92_H_
#define _VCGRARTL__1D39F2E940519F92_H_  // guard

#include "verilated.h"

//==========

class VCGRARTL__1d39f2e940519f92__Syms;

//----------

VL_MODULE(VCGRARTL__1d39f2e940519f92) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(recv_waddr___05Fen[16],0,0);
    VL_IN8(recv_waddr___05Fmsg[16],2,0);
    VL_OUT8(recv_waddr___05Frdy[16],0,0);
    VL_IN8(recv_wopt___05Fen[16],0,0);
    VL_IN64(recv_wopt___05Fmsg[16],48,0);
    VL_OUT8(recv_wopt___05Frdy[16],0,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F0__DOT__const_queue___05Fclk;
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F0__DOT__channel___05F0__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F0__DOT__channel___05F1__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F0__DOT__channel___05F2__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F0__DOT__channel___05F3__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F0__DOT__channel___05F4__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F0__DOT__channel___05F5__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F0__DOT__channel___05F6__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F0__DOT__channel___05F7__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F0__DOT__reg_predicate__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F1__DOT__const_queue___05Fclk;
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F1__DOT__channel___05F0__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F1__DOT__channel___05F1__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F1__DOT__channel___05F2__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F1__DOT__channel___05F3__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F1__DOT__channel___05F4__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F1__DOT__channel___05F5__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F1__DOT__channel___05F6__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F1__DOT__channel___05F7__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F1__DOT__reg_predicate__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F2__DOT__const_queue___05Fclk;
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F2__DOT__channel___05F0__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F2__DOT__channel___05F1__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F2__DOT__channel___05F2__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F2__DOT__channel___05F3__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F2__DOT__channel___05F4__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F2__DOT__channel___05F5__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F2__DOT__channel___05F6__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F2__DOT__channel___05F7__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F2__DOT__reg_predicate__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F3__DOT__const_queue___05Fclk;
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F3__DOT__channel___05F0__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F3__DOT__channel___05F1__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F3__DOT__channel___05F2__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F3__DOT__channel___05F3__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F3__DOT__channel___05F4__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F3__DOT__channel___05F5__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F3__DOT__channel___05F6__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F3__DOT__channel___05F7__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F3__DOT__reg_predicate__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F4__DOT__const_queue___05Fclk;
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F4__DOT__channel___05F0__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F4__DOT__channel___05F1__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F4__DOT__channel___05F2__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F4__DOT__channel___05F3__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F4__DOT__channel___05F4__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F4__DOT__channel___05F5__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F4__DOT__channel___05F6__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F4__DOT__channel___05F7__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F4__DOT__reg_predicate__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F5__DOT__const_queue___05Fclk;
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F5__DOT__channel___05F0__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F5__DOT__channel___05F1__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F5__DOT__channel___05F2__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F5__DOT__channel___05F3__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F5__DOT__channel___05F4__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F5__DOT__channel___05F5__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F5__DOT__channel___05F6__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F5__DOT__channel___05F7__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F5__DOT__reg_predicate__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F6__DOT__const_queue___05Fclk;
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F6__DOT__channel___05F0__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F6__DOT__channel___05F1__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F6__DOT__channel___05F2__DOT__queues___05F0__DOT__ctrl___05Fclk;
    };
    struct {
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F6__DOT__channel___05F3__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F6__DOT__channel___05F4__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F6__DOT__channel___05F5__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F6__DOT__channel___05F6__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F6__DOT__channel___05F7__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F6__DOT__reg_predicate__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F7__DOT__const_queue___05Fclk;
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F7__DOT__channel___05F0__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F7__DOT__channel___05F1__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F7__DOT__channel___05F2__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F7__DOT__channel___05F3__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F7__DOT__channel___05F4__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F7__DOT__channel___05F5__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F7__DOT__channel___05F6__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F7__DOT__channel___05F7__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F7__DOT__reg_predicate__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F8__DOT__const_queue___05Fclk;
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F8__DOT__channel___05F0__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F8__DOT__channel___05F1__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F8__DOT__channel___05F2__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F8__DOT__channel___05F3__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F8__DOT__channel___05F4__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F8__DOT__channel___05F5__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F8__DOT__channel___05F6__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F8__DOT__channel___05F7__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F8__DOT__reg_predicate__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F9__DOT__const_queue___05Fclk;
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F9__DOT__channel___05F0__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F9__DOT__channel___05F1__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F9__DOT__channel___05F2__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F9__DOT__channel___05F3__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F9__DOT__channel___05F4__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F9__DOT__channel___05F5__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F9__DOT__channel___05F6__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F9__DOT__channel___05F7__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F9__DOT__reg_predicate__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F10__DOT__const_queue___05Fclk;
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F10__DOT__channel___05F0__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F10__DOT__channel___05F1__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F10__DOT__channel___05F2__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F10__DOT__channel___05F3__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F10__DOT__channel___05F4__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F10__DOT__channel___05F5__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F10__DOT__channel___05F6__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F10__DOT__channel___05F7__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F10__DOT__reg_predicate__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F11__DOT__const_queue___05Fclk;
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F11__DOT__channel___05F0__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F11__DOT__channel___05F1__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F11__DOT__channel___05F2__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F11__DOT__channel___05F3__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F11__DOT__channel___05F4__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F11__DOT__channel___05F5__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F11__DOT__channel___05F6__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F11__DOT__channel___05F7__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F11__DOT__reg_predicate__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F12__DOT__const_queue___05Fclk;
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F12__DOT__channel___05F0__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F12__DOT__channel___05F1__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F12__DOT__channel___05F2__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F12__DOT__channel___05F3__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F12__DOT__channel___05F4__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F12__DOT__channel___05F5__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F12__DOT__channel___05F6__DOT__queues___05F0__DOT__ctrl___05Fclk;
    };
    struct {
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F12__DOT__channel___05F7__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F12__DOT__reg_predicate__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F13__DOT__const_queue___05Fclk;
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F13__DOT__channel___05F0__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F13__DOT__channel___05F1__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F13__DOT__channel___05F2__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F13__DOT__channel___05F3__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F13__DOT__channel___05F4__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F13__DOT__channel___05F5__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F13__DOT__channel___05F6__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F13__DOT__channel___05F7__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F13__DOT__reg_predicate__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F14__DOT__const_queue___05Fclk;
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F14__DOT__channel___05F0__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F14__DOT__channel___05F1__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F14__DOT__channel___05F2__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F14__DOT__channel___05F3__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F14__DOT__channel___05F4__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F14__DOT__channel___05F5__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F14__DOT__channel___05F6__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F14__DOT__channel___05F7__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F14__DOT__reg_predicate__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F15__DOT__const_queue___05Fclk;
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F15__DOT__channel___05F0__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F15__DOT__channel___05F1__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F15__DOT__channel___05F2__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F15__DOT__channel___05F3__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F15__DOT__channel___05F4__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F15__DOT__channel___05F5__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F15__DOT__channel___05F6__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F15__DOT__channel___05F7__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F15__DOT__reg_predicate__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05Fclk[16];
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05Frecv_waddr___05Frdy[16];
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05Frecv_wopt___05Frdy[16];
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F0__DOT__channel___05Fclk[8];
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F0__DOT__channel___05F0__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F0__DOT__channel___05F1__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F0__DOT__channel___05F2__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F0__DOT__channel___05F3__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F0__DOT__channel___05F4__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F0__DOT__channel___05F5__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F0__DOT__channel___05F6__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F0__DOT__channel___05F7__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F0__DOT__element__DOT__fu___05Fclk[6];
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F0__DOT__reg_predicate__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F1__DOT__channel___05Fclk[8];
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F1__DOT__channel___05F0__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F1__DOT__channel___05F1__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F1__DOT__channel___05F2__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F1__DOT__channel___05F3__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F1__DOT__channel___05F4__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F1__DOT__channel___05F5__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F1__DOT__channel___05F6__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F1__DOT__channel___05F7__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F1__DOT__element__DOT__fu___05Fclk[6];
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F1__DOT__reg_predicate__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F2__DOT__channel___05Fclk[8];
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F2__DOT__channel___05F0__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F2__DOT__channel___05F1__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F2__DOT__channel___05F2__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F2__DOT__channel___05F3__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F2__DOT__channel___05F4__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F2__DOT__channel___05F5__DOT__queues___05Fclk[1];
    };
    struct {
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F2__DOT__channel___05F6__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F2__DOT__channel___05F7__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F2__DOT__element__DOT__fu___05Fclk[6];
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F2__DOT__reg_predicate__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F3__DOT__channel___05Fclk[8];
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F3__DOT__channel___05F0__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F3__DOT__channel___05F1__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F3__DOT__channel___05F2__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F3__DOT__channel___05F3__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F3__DOT__channel___05F4__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F3__DOT__channel___05F5__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F3__DOT__channel___05F6__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F3__DOT__channel___05F7__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F3__DOT__element__DOT__fu___05Fclk[6];
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F3__DOT__reg_predicate__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F4__DOT__channel___05Fclk[8];
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F4__DOT__channel___05F0__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F4__DOT__channel___05F1__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F4__DOT__channel___05F2__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F4__DOT__channel___05F3__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F4__DOT__channel___05F4__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F4__DOT__channel___05F5__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F4__DOT__channel___05F6__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F4__DOT__channel___05F7__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F4__DOT__element__DOT__fu___05Fclk[6];
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F4__DOT__reg_predicate__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F5__DOT__channel___05Fclk[8];
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F5__DOT__channel___05F0__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F5__DOT__channel___05F1__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F5__DOT__channel___05F2__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F5__DOT__channel___05F3__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F5__DOT__channel___05F4__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F5__DOT__channel___05F5__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F5__DOT__channel___05F6__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F5__DOT__channel___05F7__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F5__DOT__element__DOT__fu___05Fclk[6];
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F5__DOT__reg_predicate__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F6__DOT__channel___05Fclk[8];
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F6__DOT__channel___05F0__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F6__DOT__channel___05F1__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F6__DOT__channel___05F2__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F6__DOT__channel___05F3__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F6__DOT__channel___05F4__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F6__DOT__channel___05F5__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F6__DOT__channel___05F6__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F6__DOT__channel___05F7__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F6__DOT__element__DOT__fu___05Fclk[6];
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F6__DOT__reg_predicate__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F7__DOT__channel___05Fclk[8];
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F7__DOT__channel___05F0__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F7__DOT__channel___05F1__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F7__DOT__channel___05F2__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F7__DOT__channel___05F3__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F7__DOT__channel___05F4__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F7__DOT__channel___05F5__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F7__DOT__channel___05F6__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F7__DOT__channel___05F7__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F7__DOT__element__DOT__fu___05Fclk[6];
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F7__DOT__reg_predicate__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F8__DOT__channel___05Fclk[8];
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F8__DOT__channel___05F0__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F8__DOT__channel___05F1__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F8__DOT__channel___05F2__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F8__DOT__channel___05F3__DOT__queues___05Fclk[1];
    };
    struct {
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F8__DOT__channel___05F4__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F8__DOT__channel___05F5__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F8__DOT__channel___05F6__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F8__DOT__channel___05F7__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F8__DOT__element__DOT__fu___05Fclk[6];
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F8__DOT__reg_predicate__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F9__DOT__channel___05Fclk[8];
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F9__DOT__channel___05F0__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F9__DOT__channel___05F1__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F9__DOT__channel___05F2__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F9__DOT__channel___05F3__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F9__DOT__channel___05F4__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F9__DOT__channel___05F5__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F9__DOT__channel___05F6__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F9__DOT__channel___05F7__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F9__DOT__element__DOT__fu___05Fclk[6];
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F9__DOT__reg_predicate__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F10__DOT__channel___05Fclk[8];
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F10__DOT__channel___05F0__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F10__DOT__channel___05F1__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F10__DOT__channel___05F2__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F10__DOT__channel___05F3__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F10__DOT__channel___05F4__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F10__DOT__channel___05F5__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F10__DOT__channel___05F6__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F10__DOT__channel___05F7__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F10__DOT__element__DOT__fu___05Fclk[6];
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F10__DOT__reg_predicate__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F11__DOT__channel___05Fclk[8];
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F11__DOT__channel___05F0__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F11__DOT__channel___05F1__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F11__DOT__channel___05F2__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F11__DOT__channel___05F3__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F11__DOT__channel___05F4__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F11__DOT__channel___05F5__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F11__DOT__channel___05F6__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F11__DOT__channel___05F7__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F11__DOT__element__DOT__fu___05Fclk[6];
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F11__DOT__reg_predicate__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F12__DOT__channel___05Fclk[8];
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F12__DOT__channel___05F0__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F12__DOT__channel___05F1__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F12__DOT__channel___05F2__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F12__DOT__channel___05F3__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F12__DOT__channel___05F4__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F12__DOT__channel___05F5__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F12__DOT__channel___05F6__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F12__DOT__channel___05F7__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F12__DOT__element__DOT__fu___05Fclk[6];
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F12__DOT__reg_predicate__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F13__DOT__channel___05Fclk[8];
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F13__DOT__channel___05F0__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F13__DOT__channel___05F1__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F13__DOT__channel___05F2__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F13__DOT__channel___05F3__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F13__DOT__channel___05F4__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F13__DOT__channel___05F5__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F13__DOT__channel___05F6__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F13__DOT__channel___05F7__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F13__DOT__element__DOT__fu___05Fclk[6];
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F13__DOT__reg_predicate__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F14__DOT__channel___05Fclk[8];
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F14__DOT__channel___05F0__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F14__DOT__channel___05F1__DOT__queues___05Fclk[1];
    };
    struct {
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F14__DOT__channel___05F2__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F14__DOT__channel___05F3__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F14__DOT__channel___05F4__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F14__DOT__channel___05F5__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F14__DOT__channel___05F6__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F14__DOT__channel___05F7__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F14__DOT__element__DOT__fu___05Fclk[6];
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F14__DOT__reg_predicate__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F15__DOT__channel___05Fclk[8];
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F15__DOT__channel___05F0__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F15__DOT__channel___05F1__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F15__DOT__channel___05F2__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F15__DOT__channel___05F3__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F15__DOT__channel___05F4__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F15__DOT__channel___05F5__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F15__DOT__channel___05F6__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F15__DOT__channel___05F7__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F15__DOT__element__DOT__fu___05Fclk[6];
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F15__DOT__reg_predicate__DOT__queues___05Fclk[1];
    };
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F0__DOT__element__DOT____Vcellinp__fu___05F5__clk;
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F5__clk;
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F5__clk;
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F5__clk;
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F4__DOT__element__DOT____Vcellinp__fu___05F5__clk;
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F5__DOT__element__DOT____Vcellinp__fu___05F5__clk;
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F6__DOT__element__DOT____Vcellinp__fu___05F5__clk;
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F7__DOT__element__DOT____Vcellinp__fu___05F5__clk;
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F8__DOT__element__DOT____Vcellinp__fu___05F5__clk;
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F9__DOT__element__DOT____Vcellinp__fu___05F5__clk;
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F10__DOT__element__DOT____Vcellinp__fu___05F5__clk;
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F11__DOT__element__DOT____Vcellinp__fu___05F5__clk;
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F12__DOT__element__DOT____Vcellinp__fu___05F5__clk;
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F13__DOT__element__DOT____Vcellinp__fu___05F5__clk;
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F14__DOT__element__DOT____Vcellinp__fu___05F5__clk;
        CData/*0:0*/ CGRARTL___05F1d39f2e940519f92__DOT__tile___05F15__DOT__element__DOT____Vcellinp__fu___05F5__clk;
        CData/*0:0*/ __Vclklast__TOP__clk;
        CData/*0:0*/ __Vclklast__TOP__CGRARTL___05F1d39f2e940519f92__DOT__tile___05F0__DOT__const_queue___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRARTL___05F1d39f2e940519f92__DOT__tile___05F1__DOT__const_queue___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRARTL___05F1d39f2e940519f92__DOT__tile___05F2__DOT__const_queue___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRARTL___05F1d39f2e940519f92__DOT__tile___05F3__DOT__const_queue___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRARTL___05F1d39f2e940519f92__DOT__tile___05F4__DOT__const_queue___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRARTL___05F1d39f2e940519f92__DOT__tile___05F5__DOT__const_queue___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRARTL___05F1d39f2e940519f92__DOT__tile___05F6__DOT__const_queue___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRARTL___05F1d39f2e940519f92__DOT__tile___05F7__DOT__const_queue___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRARTL___05F1d39f2e940519f92__DOT__tile___05F8__DOT__const_queue___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRARTL___05F1d39f2e940519f92__DOT__tile___05F9__DOT__const_queue___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRARTL___05F1d39f2e940519f92__DOT__tile___05F10__DOT__const_queue___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRARTL___05F1d39f2e940519f92__DOT__tile___05F11__DOT__const_queue___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRARTL___05F1d39f2e940519f92__DOT__tile___05F12__DOT__const_queue___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRARTL___05F1d39f2e940519f92__DOT__tile___05F13__DOT__const_queue___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRARTL___05F1d39f2e940519f92__DOT__tile___05F14__DOT__const_queue___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRARTL___05F1d39f2e940519f92__DOT__tile___05F15__DOT__const_queue___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRARTL___05F1d39f2e940519f92__DOT__tile___05F0__DOT__reg_predicate__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRARTL___05F1d39f2e940519f92__DOT__tile___05F1__DOT__reg_predicate__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRARTL___05F1d39f2e940519f92__DOT__tile___05F2__DOT__reg_predicate__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRARTL___05F1d39f2e940519f92__DOT__tile___05F3__DOT__reg_predicate__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRARTL___05F1d39f2e940519f92__DOT__tile___05F4__DOT__reg_predicate__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRARTL___05F1d39f2e940519f92__DOT__tile___05F5__DOT__reg_predicate__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRARTL___05F1d39f2e940519f92__DOT__tile___05F6__DOT__reg_predicate__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRARTL___05F1d39f2e940519f92__DOT__tile___05F7__DOT__reg_predicate__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRARTL___05F1d39f2e940519f92__DOT__tile___05F8__DOT__reg_predicate__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRARTL___05F1d39f2e940519f92__DOT__tile___05F9__DOT__reg_predicate__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRARTL___05F1d39f2e940519f92__DOT__tile___05F10__DOT__reg_predicate__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRARTL___05F1d39f2e940519f92__DOT__tile___05F11__DOT__reg_predicate__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRARTL___05F1d39f2e940519f92__DOT__tile___05F12__DOT__reg_predicate__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRARTL___05F1d39f2e940519f92__DOT__tile___05F13__DOT__reg_predicate__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRARTL___05F1d39f2e940519f92__DOT__tile___05F14__DOT__reg_predicate__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRARTL___05F1d39f2e940519f92__DOT__tile___05F15__DOT__reg_predicate__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRARTL___05F1d39f2e940519f92__DOT__tile___05F0__DOT__element__DOT____Vcellinp__fu___05F5__clk;
        CData/*0:0*/ __Vclklast__TOP__CGRARTL___05F1d39f2e940519f92__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F5__clk;
        CData/*0:0*/ __Vclklast__TOP__CGRARTL___05F1d39f2e940519f92__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F5__clk;
        CData/*0:0*/ __Vclklast__TOP__CGRARTL___05F1d39f2e940519f92__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F5__clk;
        CData/*0:0*/ __Vclklast__TOP__CGRARTL___05F1d39f2e940519f92__DOT__tile___05F4__DOT__element__DOT____Vcellinp__fu___05F5__clk;
        CData/*0:0*/ __Vclklast__TOP__CGRARTL___05F1d39f2e940519f92__DOT__tile___05F5__DOT__element__DOT____Vcellinp__fu___05F5__clk;
        CData/*0:0*/ __Vclklast__TOP__CGRARTL___05F1d39f2e940519f92__DOT__tile___05F6__DOT__element__DOT____Vcellinp__fu___05F5__clk;
        CData/*0:0*/ __Vclklast__TOP__CGRARTL___05F1d39f2e940519f92__DOT__tile___05F7__DOT__element__DOT____Vcellinp__fu___05F5__clk;
        CData/*0:0*/ __Vclklast__TOP__CGRARTL___05F1d39f2e940519f92__DOT__tile___05F8__DOT__element__DOT____Vcellinp__fu___05F5__clk;
        CData/*0:0*/ __Vclklast__TOP__CGRARTL___05F1d39f2e940519f92__DOT__tile___05F9__DOT__element__DOT____Vcellinp__fu___05F5__clk;
        CData/*0:0*/ __Vclklast__TOP__CGRARTL___05F1d39f2e940519f92__DOT__tile___05F10__DOT__element__DOT____Vcellinp__fu___05F5__clk;
        CData/*0:0*/ __Vclklast__TOP__CGRARTL___05F1d39f2e940519f92__DOT__tile___05F11__DOT__element__DOT____Vcellinp__fu___05F5__clk;
        CData/*0:0*/ __Vclklast__TOP__CGRARTL___05F1d39f2e940519f92__DOT__tile___05F12__DOT__element__DOT____Vcellinp__fu___05F5__clk;
        CData/*0:0*/ __Vclklast__TOP__CGRARTL___05F1d39f2e940519f92__DOT__tile___05F13__DOT__element__DOT____Vcellinp__fu___05F5__clk;
        CData/*0:0*/ __Vclklast__TOP__CGRARTL___05F1d39f2e940519f92__DOT__tile___05F14__DOT__element__DOT____Vcellinp__fu___05F5__clk;
    };
    struct {
        CData/*0:0*/ __Vclklast__TOP__CGRARTL___05F1d39f2e940519f92__DOT__tile___05F15__DOT__element__DOT____Vcellinp__fu___05F5__clk;
        CData/*0:0*/ __Vclklast__TOP__CGRARTL___05F1d39f2e940519f92__DOT__tile___05F0__DOT__channel___05F0__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRARTL___05F1d39f2e940519f92__DOT__tile___05F0__DOT__channel___05F1__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRARTL___05F1d39f2e940519f92__DOT__tile___05F0__DOT__channel___05F2__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRARTL___05F1d39f2e940519f92__DOT__tile___05F0__DOT__channel___05F3__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRARTL___05F1d39f2e940519f92__DOT__tile___05F0__DOT__channel___05F4__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRARTL___05F1d39f2e940519f92__DOT__tile___05F0__DOT__channel___05F5__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRARTL___05F1d39f2e940519f92__DOT__tile___05F0__DOT__channel___05F6__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRARTL___05F1d39f2e940519f92__DOT__tile___05F0__DOT__channel___05F7__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRARTL___05F1d39f2e940519f92__DOT__tile___05F1__DOT__channel___05F0__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRARTL___05F1d39f2e940519f92__DOT__tile___05F1__DOT__channel___05F1__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRARTL___05F1d39f2e940519f92__DOT__tile___05F1__DOT__channel___05F2__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRARTL___05F1d39f2e940519f92__DOT__tile___05F1__DOT__channel___05F3__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRARTL___05F1d39f2e940519f92__DOT__tile___05F1__DOT__channel___05F4__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRARTL___05F1d39f2e940519f92__DOT__tile___05F1__DOT__channel___05F5__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRARTL___05F1d39f2e940519f92__DOT__tile___05F1__DOT__channel___05F6__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRARTL___05F1d39f2e940519f92__DOT__tile___05F1__DOT__channel___05F7__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRARTL___05F1d39f2e940519f92__DOT__tile___05F2__DOT__channel___05F0__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRARTL___05F1d39f2e940519f92__DOT__tile___05F2__DOT__channel___05F1__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRARTL___05F1d39f2e940519f92__DOT__tile___05F2__DOT__channel___05F2__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRARTL___05F1d39f2e940519f92__DOT__tile___05F2__DOT__channel___05F3__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRARTL___05F1d39f2e940519f92__DOT__tile___05F2__DOT__channel___05F4__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRARTL___05F1d39f2e940519f92__DOT__tile___05F2__DOT__channel___05F5__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRARTL___05F1d39f2e940519f92__DOT__tile___05F2__DOT__channel___05F6__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRARTL___05F1d39f2e940519f92__DOT__tile___05F2__DOT__channel___05F7__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRARTL___05F1d39f2e940519f92__DOT__tile___05F3__DOT__channel___05F0__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRARTL___05F1d39f2e940519f92__DOT__tile___05F3__DOT__channel___05F1__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRARTL___05F1d39f2e940519f92__DOT__tile___05F3__DOT__channel___05F2__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRARTL___05F1d39f2e940519f92__DOT__tile___05F3__DOT__channel___05F3__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRARTL___05F1d39f2e940519f92__DOT__tile___05F3__DOT__channel___05F4__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRARTL___05F1d39f2e940519f92__DOT__tile___05F3__DOT__channel___05F5__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRARTL___05F1d39f2e940519f92__DOT__tile___05F3__DOT__channel___05F6__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRARTL___05F1d39f2e940519f92__DOT__tile___05F3__DOT__channel___05F7__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRARTL___05F1d39f2e940519f92__DOT__tile___05F4__DOT__channel___05F0__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRARTL___05F1d39f2e940519f92__DOT__tile___05F4__DOT__channel___05F1__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRARTL___05F1d39f2e940519f92__DOT__tile___05F4__DOT__channel___05F2__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRARTL___05F1d39f2e940519f92__DOT__tile___05F4__DOT__channel___05F3__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRARTL___05F1d39f2e940519f92__DOT__tile___05F4__DOT__channel___05F4__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRARTL___05F1d39f2e940519f92__DOT__tile___05F4__DOT__channel___05F5__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRARTL___05F1d39f2e940519f92__DOT__tile___05F4__DOT__channel___05F6__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRARTL___05F1d39f2e940519f92__DOT__tile___05F4__DOT__channel___05F7__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRARTL___05F1d39f2e940519f92__DOT__tile___05F5__DOT__channel___05F0__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRARTL___05F1d39f2e940519f92__DOT__tile___05F5__DOT__channel___05F1__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRARTL___05F1d39f2e940519f92__DOT__tile___05F5__DOT__channel___05F2__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRARTL___05F1d39f2e940519f92__DOT__tile___05F5__DOT__channel___05F3__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRARTL___05F1d39f2e940519f92__DOT__tile___05F5__DOT__channel___05F4__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRARTL___05F1d39f2e940519f92__DOT__tile___05F5__DOT__channel___05F5__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRARTL___05F1d39f2e940519f92__DOT__tile___05F5__DOT__channel___05F6__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRARTL___05F1d39f2e940519f92__DOT__tile___05F5__DOT__channel___05F7__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRARTL___05F1d39f2e940519f92__DOT__tile___05F6__DOT__channel___05F0__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRARTL___05F1d39f2e940519f92__DOT__tile___05F6__DOT__channel___05F1__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRARTL___05F1d39f2e940519f92__DOT__tile___05F6__DOT__channel___05F2__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRARTL___05F1d39f2e940519f92__DOT__tile___05F6__DOT__channel___05F3__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRARTL___05F1d39f2e940519f92__DOT__tile___05F6__DOT__channel___05F4__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRARTL___05F1d39f2e940519f92__DOT__tile___05F6__DOT__channel___05F5__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRARTL___05F1d39f2e940519f92__DOT__tile___05F6__DOT__channel___05F6__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRARTL___05F1d39f2e940519f92__DOT__tile___05F6__DOT__channel___05F7__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRARTL___05F1d39f2e940519f92__DOT__tile___05F7__DOT__channel___05F0__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRARTL___05F1d39f2e940519f92__DOT__tile___05F7__DOT__channel___05F1__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRARTL___05F1d39f2e940519f92__DOT__tile___05F7__DOT__channel___05F2__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRARTL___05F1d39f2e940519f92__DOT__tile___05F7__DOT__channel___05F3__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRARTL___05F1d39f2e940519f92__DOT__tile___05F7__DOT__channel___05F4__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRARTL___05F1d39f2e940519f92__DOT__tile___05F7__DOT__channel___05F5__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRARTL___05F1d39f2e940519f92__DOT__tile___05F7__DOT__channel___05F6__DOT__queues___05F0__DOT__ctrl___05Fclk;
    };
    struct {
        CData/*0:0*/ __Vclklast__TOP__CGRARTL___05F1d39f2e940519f92__DOT__tile___05F7__DOT__channel___05F7__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRARTL___05F1d39f2e940519f92__DOT__tile___05F8__DOT__channel___05F0__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRARTL___05F1d39f2e940519f92__DOT__tile___05F8__DOT__channel___05F1__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRARTL___05F1d39f2e940519f92__DOT__tile___05F8__DOT__channel___05F2__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRARTL___05F1d39f2e940519f92__DOT__tile___05F8__DOT__channel___05F3__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRARTL___05F1d39f2e940519f92__DOT__tile___05F8__DOT__channel___05F4__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRARTL___05F1d39f2e940519f92__DOT__tile___05F8__DOT__channel___05F5__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRARTL___05F1d39f2e940519f92__DOT__tile___05F8__DOT__channel___05F6__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRARTL___05F1d39f2e940519f92__DOT__tile___05F8__DOT__channel___05F7__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRARTL___05F1d39f2e940519f92__DOT__tile___05F9__DOT__channel___05F0__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRARTL___05F1d39f2e940519f92__DOT__tile___05F9__DOT__channel___05F1__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRARTL___05F1d39f2e940519f92__DOT__tile___05F9__DOT__channel___05F2__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRARTL___05F1d39f2e940519f92__DOT__tile___05F9__DOT__channel___05F3__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRARTL___05F1d39f2e940519f92__DOT__tile___05F9__DOT__channel___05F4__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRARTL___05F1d39f2e940519f92__DOT__tile___05F9__DOT__channel___05F5__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRARTL___05F1d39f2e940519f92__DOT__tile___05F9__DOT__channel___05F6__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRARTL___05F1d39f2e940519f92__DOT__tile___05F9__DOT__channel___05F7__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRARTL___05F1d39f2e940519f92__DOT__tile___05F10__DOT__channel___05F0__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRARTL___05F1d39f2e940519f92__DOT__tile___05F10__DOT__channel___05F1__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRARTL___05F1d39f2e940519f92__DOT__tile___05F10__DOT__channel___05F2__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRARTL___05F1d39f2e940519f92__DOT__tile___05F10__DOT__channel___05F3__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRARTL___05F1d39f2e940519f92__DOT__tile___05F10__DOT__channel___05F4__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRARTL___05F1d39f2e940519f92__DOT__tile___05F10__DOT__channel___05F5__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRARTL___05F1d39f2e940519f92__DOT__tile___05F10__DOT__channel___05F6__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRARTL___05F1d39f2e940519f92__DOT__tile___05F10__DOT__channel___05F7__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRARTL___05F1d39f2e940519f92__DOT__tile___05F11__DOT__channel___05F0__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRARTL___05F1d39f2e940519f92__DOT__tile___05F11__DOT__channel___05F1__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRARTL___05F1d39f2e940519f92__DOT__tile___05F11__DOT__channel___05F2__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRARTL___05F1d39f2e940519f92__DOT__tile___05F11__DOT__channel___05F3__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRARTL___05F1d39f2e940519f92__DOT__tile___05F11__DOT__channel___05F4__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRARTL___05F1d39f2e940519f92__DOT__tile___05F11__DOT__channel___05F5__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRARTL___05F1d39f2e940519f92__DOT__tile___05F11__DOT__channel___05F6__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRARTL___05F1d39f2e940519f92__DOT__tile___05F11__DOT__channel___05F7__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRARTL___05F1d39f2e940519f92__DOT__tile___05F12__DOT__channel___05F0__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRARTL___05F1d39f2e940519f92__DOT__tile___05F12__DOT__channel___05F1__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRARTL___05F1d39f2e940519f92__DOT__tile___05F12__DOT__channel___05F2__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRARTL___05F1d39f2e940519f92__DOT__tile___05F12__DOT__channel___05F3__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRARTL___05F1d39f2e940519f92__DOT__tile___05F12__DOT__channel___05F4__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRARTL___05F1d39f2e940519f92__DOT__tile___05F12__DOT__channel___05F5__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRARTL___05F1d39f2e940519f92__DOT__tile___05F12__DOT__channel___05F6__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRARTL___05F1d39f2e940519f92__DOT__tile___05F12__DOT__channel___05F7__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRARTL___05F1d39f2e940519f92__DOT__tile___05F13__DOT__channel___05F0__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRARTL___05F1d39f2e940519f92__DOT__tile___05F13__DOT__channel___05F1__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRARTL___05F1d39f2e940519f92__DOT__tile___05F13__DOT__channel___05F2__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRARTL___05F1d39f2e940519f92__DOT__tile___05F13__DOT__channel___05F3__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRARTL___05F1d39f2e940519f92__DOT__tile___05F13__DOT__channel___05F4__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRARTL___05F1d39f2e940519f92__DOT__tile___05F13__DOT__channel___05F5__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRARTL___05F1d39f2e940519f92__DOT__tile___05F13__DOT__channel___05F6__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRARTL___05F1d39f2e940519f92__DOT__tile___05F13__DOT__channel___05F7__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRARTL___05F1d39f2e940519f92__DOT__tile___05F14__DOT__channel___05F0__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRARTL___05F1d39f2e940519f92__DOT__tile___05F14__DOT__channel___05F1__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRARTL___05F1d39f2e940519f92__DOT__tile___05F14__DOT__channel___05F2__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRARTL___05F1d39f2e940519f92__DOT__tile___05F14__DOT__channel___05F3__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRARTL___05F1d39f2e940519f92__DOT__tile___05F14__DOT__channel___05F4__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRARTL___05F1d39f2e940519f92__DOT__tile___05F14__DOT__channel___05F5__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRARTL___05F1d39f2e940519f92__DOT__tile___05F14__DOT__channel___05F6__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRARTL___05F1d39f2e940519f92__DOT__tile___05F14__DOT__channel___05F7__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRARTL___05F1d39f2e940519f92__DOT__tile___05F15__DOT__channel___05F0__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRARTL___05F1d39f2e940519f92__DOT__tile___05F15__DOT__channel___05F1__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRARTL___05F1d39f2e940519f92__DOT__tile___05F15__DOT__channel___05F2__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRARTL___05F1d39f2e940519f92__DOT__tile___05F15__DOT__channel___05F3__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRARTL___05F1d39f2e940519f92__DOT__tile___05F15__DOT__channel___05F4__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRARTL___05F1d39f2e940519f92__DOT__tile___05F15__DOT__channel___05F5__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRARTL___05F1d39f2e940519f92__DOT__tile___05F15__DOT__channel___05F6__DOT__queues___05F0__DOT__ctrl___05Fclk;
    };
    struct {
        CData/*0:0*/ __Vclklast__TOP__CGRARTL___05F1d39f2e940519f92__DOT__tile___05F15__DOT__channel___05F7__DOT__queues___05F0__DOT__ctrl___05Fclk;
    };
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VCGRARTL__1d39f2e940519f92__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VCGRARTL__1d39f2e940519f92);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    VCGRARTL__1d39f2e940519f92(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VCGRARTL__1d39f2e940519f92();
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(VCGRARTL__1d39f2e940519f92__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VCGRARTL__1d39f2e940519f92__Syms* symsp, bool first);
  private:
    static QData _change_request(VCGRARTL__1d39f2e940519f92__Syms* __restrict vlSymsp);
    static QData _change_request_1(VCGRARTL__1d39f2e940519f92__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__3(VCGRARTL__1d39f2e940519f92__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(VCGRARTL__1d39f2e940519f92__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(VCGRARTL__1d39f2e940519f92__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(VCGRARTL__1d39f2e940519f92__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__1(VCGRARTL__1d39f2e940519f92__Syms* __restrict vlSymsp) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
