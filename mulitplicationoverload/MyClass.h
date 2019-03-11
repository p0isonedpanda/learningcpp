#pragma once

class MyClass
{
    public:
        MyClass(int _num);

        int num;
        MyClass operator*(MyClass _x);
};
