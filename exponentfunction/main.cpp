#include <iostream>

using namespace std;

int Power(int num, int pow)
{
    int result = 1;

    for (int i = 0; i < pow; i++)
    {
        result *= num;
    }

    return result;
}

int main()
{
    cout << Power(3, 3) << endl;
    return 0;
}
