#include <iostream>
using namespace std;

class Clothes{
    public:
        int price;
        string colour;
        Clothes()
        {
            cout << "Default constructor of Cloth" << endl;
        }
        Clothes(int p, string c)
        {
            cout << "Parameterized constructor of Cloth " << endl;
            price = p;
            colour = c;
        }
        void out()
        {
            cout << "This cloth is a colour " << colour << " which costs " << price << endl;
        }
};
class Shirt : public Clothes{
    public:
        string type="Shirt";
        Shirt(int p, string c)
        {
            price = p;
            colour = c;
        }
        void out()
        {
            cout << "This is a " << type << " of colour " << colour << " which costs " << price << endl;
        }
};

int main()
{
    Clothes c(600, "Blue");
    c.out();

    Shirt s(500, "Red");
    /*
    In this case we are calling parameterized constructor of Shirt class and
    As it is inheriting clothes class it will call clothes constructor
    but though we calling parameterized constructor of shirt it will always call default
    constructor of super class
    */
    s.out();
    return 0;
}
