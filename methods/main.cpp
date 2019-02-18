#include <iostream>

using namespace std;

class Student
{
    public:
        string name;
        string major;
        double gpa;

        Student(string _name, string _major, double _gpa)
        {
            name = _name;
            major = _major;
            gpa = _gpa;
        }

        bool HonourRoll()
        {
            return gpa >= 3.5;
        }
};

int main()
{
    Student dan("dan", "software dev", 2.4);
    cout << dan.HonourRoll() << endl;
    
    return 0;
}
