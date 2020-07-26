#include <iostream>
using namespace std;

class Phone{
    public:
        string company;
        int price;
};

int main()
{

    Phone p1;
    p1.company = "Apple";
    p1.price = 60000;

    Phone p2;
    p2.company = "Oppo";
    p2.price = 35000;

    cout << "Company" << "\t" << "Price" << endl;
    cout << p1.company << "\tRs." << p1.price << endl;
    cout << p2.company << "\tRs." << p2.price << endl;

    return 0;
}
