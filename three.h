//==============================================================================
//
// Specific Implementation of the Three Stooges
//
// Note that this file contains a dependency on the stooge.h
// header file, as these implementations are derived from the
// Stooge class.
//
// This example was adapted from:
//      https://sourcemaking.com/design_patterns/factory_method/cpp/1 
//
// Adaptations were made by: C. Lupp
//
//==============================================================================
#pragma once

#include "stooge.h"


class Larry : public Stooge
{
public:
    void slap_stick()
    {
        cout << "Larry: poke eyes\n";
    }

    static Stooge * __stdcall Create() { return new Larry(); }

};


class Moe : public Stooge
{
public:
    void slap_stick()
    {
        cout << "Moe: slap head\n";
    }

    static Stooge * __stdcall Create() { return new Moe(); }

};


class Curly : public Stooge
{
public:
    void slap_stick()
    {
        cout << "Curly: suffer abuse\n";
    }

    static Stooge * __stdcall Create() { return new Curly(); }

};