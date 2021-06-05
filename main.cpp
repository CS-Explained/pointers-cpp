#include <iostream>
#include "user.hpp"

// *, &, ->

int main()
{
    // int var = 5;
    // int * varPtr = &var;
    // std::cout << var << std::endl;
    // std::cout << *varPtr << std::endl;
    // std::cout << &var << std::endl;
    // std::cout << varPtr << std::endl;
    // std::cout << &varPtr << std::endl;
    // std::cout << *(&var) << std::endl;
    // //std::cout << &(*var) << std::endl;
    User adam ("Adam");
    User * adamPtr = &adam;
    std::cout << adam.GetName () << std::endl;
    std::cout << (*adamPtr).GetName() << std::endl;
    std::cout << adamPtr->GetName() << std::endl;
}

