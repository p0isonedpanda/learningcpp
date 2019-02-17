#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    // you can just print out numbers
    cout << 10 << endl;
    // you can then also print out the result of mathematical functions
    cout << 10 + 25 << endl;
    // storing and incrementing the number
    int num = 0;
    num++;
    cout << num << endl; // 1
    num += 10;
    cout << num << endl; // 10
    // it's important to remember that if you do maths with a certain type, you will get that type back
    cout << 10 / 4 << endl; // prints out 2 despite it really being 2.5
    cout << 10.0 / 4.0 << endl; // prints out 2.5
    cout << 10.0 / 4 << endl; // prints out 2.5

    // this stuff uses cmath
    cout << pow(3, 2) << endl;
    cout << round(3.2) << endl;
    cout << ceil(3.2) << endl;
    cout << floor(3.9) << endl;
    cout << fmax(3, 10) << endl;
    cout << fmin(3, 10) << endl;
    return 0;
}
