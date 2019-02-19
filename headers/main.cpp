#include <iostream>
#include <string>
#include "log.h"
#include "person.h"

int main()
{
    Log("hello world");

    Person dan("dan", 20);
    dan.Introduce();

    return 0;
}
