#include <iostream>

using namespace std;

int main()
{
    int age = 19;
    int* pAge = &age;

    double gpa = 2.7;
    double* pGpa = &gpa;

    string name = "dan";
    string* pName = &name;

    // print out the memory addresses
    cout << &age << endl;
    cout << &gpa << endl;
    cout << &name << endl;

    // dereferencing the pointer
    cout << endl;
    cout << *pAge << endl;
    cout << *pGpa << endl;
    cout << *pName << endl;

    return 0;
}
