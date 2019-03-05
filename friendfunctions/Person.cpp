#include <string>
#include "Person.h"

Person::Person()
{
    name = "dan";
}

// we don't need to reference this function as a part of the Person class because it is friends with it, not a part of it
std::string GetName(const Person &p)
{
    return p.name; // we can access the name private member from outside the class because GetName is
                   // a friend of the Person class
}
