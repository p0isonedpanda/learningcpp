#include <iostream>
#include "person.h"

Person::Person(std::string _name, int _age)
{
    name = _name;
    age = _age;
}

void Person::Introduce()
{
    std::cout << "my name is " << name << " and i am " << age << " years old" << std::endl;
}
