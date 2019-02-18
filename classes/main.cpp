#include <iostream>

using namespace std;

class Book
{
    public:
        string title;
        string author;
        int pages;

        // default constructor
        Book()
        {
            title = "default";
            author = "default";
            pages = 0;
        }

        // constructor
        Book(string _title, string _author, int _pages)
        {
            title = _title;
            author = _author;
            pages = _pages;
        }
};

int main()
{
    // construct object
    Book myBook("yeet", "yote", 1337);

    cout << myBook.title << endl;
    cout << myBook.author << endl;
    cout << myBook.pages << endl;

    // construct object with default constructor
    Book defaultBook;
    
    cout << defaultBook.title << endl;
    cout << defaultBook.author << endl;
    cout << defaultBook.pages << endl;

    return 0;
}
