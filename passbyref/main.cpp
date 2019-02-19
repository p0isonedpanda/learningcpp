#include <iostream>

void Increment(int& num)
{
    num++;
}

int main()
{
    int num = 1;
    std::cout << num << std::endl;
    Increment(num);
    std::cout << num << std::endl;

    return 0;
}
