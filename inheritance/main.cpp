#include <iostream>

using namespace std;

class Chef
{
    public:
        void MakeChicken()
        {
            cout << "the chef makes some chicken" << endl;
        }

        void MakeSalad()
        {
            cout << "the chef makes some salad" << endl;
        }

        void MakeSpecialDish()
        {
            cout << "the check makes some bbq ribs" << endl;
        }
};

class ItalianChef : public Chef
{
    public:
        void MakePasta()
        {
            cout << "the chef makes some pasta" << endl;
        }
        
        void MakeSpecialDish()
        {
            cout << "the chef makes some pizza" << endl;
        }
};

int main()
{
    Chef myChef;
    myChef.MakeChicken();

    ItalianChef myItalianChef;
    myItalianChef.MakeChicken();

    myChef.MakeSpecialDish();
    myItalianChef.MakeSpecialDish();

    return 0;
}
