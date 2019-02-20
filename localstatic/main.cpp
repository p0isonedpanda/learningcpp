#include <iostream>

void Fun()
{
    // local static instance of a variable makes the variable only accessible within
    // this scope while still keeping a reference to it between calls
    static int i = 0;
    i++;
    std::cout << i << std::endl;
}

int main()
{
    Fun();
    Fun();
    Fun();
    Fun();
    Fun();
}
