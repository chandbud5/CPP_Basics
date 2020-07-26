
#include <iostream>
using namespace std;

class Book{
    public:
        string title;
        int pages;

        // Default Constructor
        Book(){
            cout << "Empty Book" << endl;
        }

        // Parameterized Constructor
        Book(string name, int page){
            title = name;
            pages = page;
        }
};

int main()
{
    Book b("Head First C++", 450);

    cout << b.title << endl;
    cout << b.pages << endl;

    b.title = "Lord of the rings";

    Book b1;
    b1.title = "Harry Porter";
    b1.pages = 800;

    cout << b1.title << endl;
    cout << b1.pages << endl;

    return 0;
}
