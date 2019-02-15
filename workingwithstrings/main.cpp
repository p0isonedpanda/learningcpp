#include <iostream>

using namespace std;

int main()
{
    // declare string
    string name = "dan";
    // get length of string
    cout << name.length() << endl;
    // get single char from string
    cout << name[0] << endl;
    // replace char in string
    name[0] = 'b';
    cout << name << endl;
    // find where a substring occurs in a string, if it does at all
    cout << name.find("a", 0) << endl;
    // grab a substring of a string
    cout << name.substr(1, 2) << endl;
    return 0;
}
