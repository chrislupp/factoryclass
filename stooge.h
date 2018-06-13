//==============================================================================
//
// General Implementation of a Stooge
//
// Note that this file does not contain any references to the specific stooge
// implementations. As such, they can be kept entirely independent of the "core"
// stooge code (implemented outside of it).
//
// This example was adapted from:
//      https://sourcemaking.com/design_patterns/factory_method/cpp/1 
//
// Adaptations were made by: C. Lupp
//
//==============================================================================
#pragma once

#include <iostream>

using namespace std;


class Stooge
{
  public:
    // Factory Method
    virtual void slap_stick() = 0;
};