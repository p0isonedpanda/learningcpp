#include <iostream>
#include "MyClass.h"

int main()
{
    MyClass x(10);
    MyClass y(2);

    MyClass z = x * y;

    std::cout << z.num << std::endl;

    return 0;
}
