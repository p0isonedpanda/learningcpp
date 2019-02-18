#include <iostream>

using namespace std;

int main()
{
    int num;
    cout << "enter a number: ";
    cin >> num;
    
    if (num >= 10)
    {
        cout << "the number is greater than or equal to 10" << endl;
    }
    else
    {
        cout << "the number is below 10" << endl;
    }
    return 0;
}
