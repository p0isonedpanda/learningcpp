#include <iostream>

using namespace std;

void SayHi(string name);

int main()
{
    SayHi("dan");
    return 0;
}

void SayHi(string name)
{
    cout << "hello there " << name << endl;
}
