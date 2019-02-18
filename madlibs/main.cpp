#include <iostream>

using namespace std;

int main()
{
    string colour, noun, name;

    cout << "enter a color: ";
    getline(cin, colour);
    cout << "enter a noun: ";
    getline(cin, noun);
    cout << "enter a name: ";
    getline(cin, name);

    cout << "roses are " << colour << endl;
    cout << noun << " are blue" << endl;
    cout << "i love " << name << endl;
    return 0;
}
