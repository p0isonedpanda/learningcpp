#include <iostream>

using namespace std;

int main()
{
    int age;
    cout << "enter your age" << endl;
    cin >> age;
    cout << "you are " << age << " years old" << endl;

    string name;
    getline(cin, name);
    cout << "your name is " << name << endl;
    return 0;
}
