// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VCGRARTL__1d39f2e940519f92.h for the primary calling header

#ifndef _VCGRARTL__1D39F2E940519F92___024UNIT_H_
#define _VCGRARTL__1D39F2E940519F92___024UNIT_H_  // guard

#include "verilated.h"

//==========

class VCGRARTL__1d39f2e940519f92__Syms;

//----------

VL_MODULE(VCGRARTL__1d39f2e940519f92___024unit) {
  public:
    
    // INTERNAL VARIABLES
  private:
    VCGRARTL__1d39f2e940519f92__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VCGRARTL__1d39f2e940519f92___024unit);  ///< Copying not allowed
  public:
    VCGRARTL__1d39f2e940519f92___024unit(const char* name = "TOP");
    ~VCGRARTL__1d39f2e940519f92___024unit();
    
    // INTERNAL METHODS
    void __Vconfigure(VCGRARTL__1d39f2e940519f92__Syms* symsp, bool first);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
