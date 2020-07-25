// Arithmetic Operators
#include <iostream>

using namespace std;

int main()
{
    int a = 10,c = 3;
    float t,b = 3, d = 10;
    cout << a+c << endl;    //add
    cout << a-c << endl;    //sub
    cout << a*c << endl;    //multiply
    t = a/c;    //divide int variable with another int variable returns int
    cout << t << endl;
    t = d/b;    // float var by float var returns float
    cout << t << endl;
    cout << a%c << endl;    // modulo
    a++;    //post increment
    cout << "Value of a is incremented with post increment to " << a <<endl;
    cout << "with pre increment " << ++a << endl;
    // similarly we can have decrement
}

