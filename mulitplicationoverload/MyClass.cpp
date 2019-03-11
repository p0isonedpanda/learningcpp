#include "MyClass.h"

MyClass::MyClass(int _num)
{
    num = _num;
}

MyClass MyClass::operator*(MyClass _x)
{
    return _x.num *= num;
}
