#include <iostream>
#include <fstream>

int main ()
{
    std::ifstream textfile("test");

    unsigned char input;

    if (textfile.is_open())
        while (textfile >> input) std::cout << input;
    else std::cout << "cannot open file" << std::endl;

    return 0;
}
