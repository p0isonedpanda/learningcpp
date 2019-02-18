#include <iostream>

using namespace std;

string GetDay(int dayNum)
{
    string dayName;

    switch (dayNum)
    {
        case 0:
            dayName = "sunday";
            break;

        case 1:
            dayName = "monday";
            break;

        case 2:
            dayName = "tuesday";
            break;

        case 3:
            dayName = "wednesday";
            break;

        case 4:
            dayName = "thursday";
            break;

        case 5:
            dayName = "friday";
            break;

        case 6:
            dayName = "saturday";
            break;

        default:
            dayName = "invalid";
            break;
    }

    return dayName;
}

int main()
{
    cout << GetDay(2)  << endl;
    return 0;
}
