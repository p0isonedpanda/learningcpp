#include <string>
#include "Person.h"

Person::Person()
{
    name = "dan";
}

std::string GetName(const Person &p)
{
    return p.name;
}
