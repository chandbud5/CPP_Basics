#include <iostream>

using namespace std;

int main()
{
    string name = "Chand Bud";

    cout << "Length of the name is " << name.length() << endl;
    cout << name<<"\n\n";

    cout << "Indexing with index positions" << endl;
    cout << name[2] <<endl;

    name[2] = 'B';
    cout << name << endl;
    cout << "NOTE - STRINGS ARE MUTABLE IN C++" << endl;

    string const x = "Hello";
    cout << x << endl;
    // x[2] = 0;
    // THe above line generates an error as we have declared string constant

    cout << x.find("llo") << endl;
    // above function will return index of first character in a string passed in find function
    // in this case we get index of first l

    // to fetch substring from a string with index position start and length of substr
    cout << x.substr(1,3);
}
