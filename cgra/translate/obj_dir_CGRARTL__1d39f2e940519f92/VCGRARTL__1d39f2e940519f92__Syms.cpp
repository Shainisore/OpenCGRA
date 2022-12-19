// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VCGRARTL__1d39f2e940519f92__Syms.h"
#include "VCGRARTL__1d39f2e940519f92.h"
#include "VCGRARTL__1d39f2e940519f92___024unit.h"



// FUNCTIONS
VCGRARTL__1d39f2e940519f92__Syms::VCGRARTL__1d39f2e940519f92__Syms(VCGRARTL__1d39f2e940519f92* topp, const char* namep)
    // Setup locals
    : __Vm_namep(namep)
    , __Vm_didInit(false)
    // Setup submodule names
{
    // Pointer to top level
    TOPp = topp;
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOPp->__Vconfigure(this, true);
}
