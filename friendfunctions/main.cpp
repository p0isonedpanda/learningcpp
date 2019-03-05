#include <iostream>
#include "Person.h"

int main ()
{
    Person dan; // construct the object

    std::cout << GetName(dan) << std::endl; // we can call GetName without a reference to the class it is friends with

    return 0;
}
