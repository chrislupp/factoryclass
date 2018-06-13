//==============================================================================
//
// Main Program
//
// Note that this file contains dependencies for both stooge.h (general 
// implementation) and three.h (specific implementation).
//
// This example was adapted from:
//      https://sourcemaking.com/design_patterns/factory_method/cpp/1 
//
// Adaptations were made by: C. Lupp
//
//==============================================================================

#include <iostream>
#include <vector>

#include "stooge.h"
#include "three.h"

using namespace std;


int main()
{
    vector<Stooge*> roles;
  
    // create Larry
    roles.push_back(Larry::Create());

    // create Moe
    roles.push_back(Moe::Create());

    // create Curly
    roles.push_back(Curly::Create());


    // run the slap stick function of all role elements
    for (int i = 0; i < roles.size(); i++)
        roles[i]->slap_stick();


    return 0;
}