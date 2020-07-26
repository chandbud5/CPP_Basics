#include <iostream>
using namespace std;

int main()
{
    int a = 12;
    double c = 8.94;
    int *pa = &a;
    double *pc = &c;
    cout << "a = "<< a << endl;
    cout << "c = "<< c << endl;
    cout << "pa = "<< pa << endl;
    cout << "pc = "<< pc << "\n" << endl;

    cout << &a << " = pa = " << pa << endl;
    cout << *pc << " = c = " << c << endl;  //Dereferencing pointer  (fetching values of a variable with it's pointer)
    cout << *&a << " = a = " << a << endl;
    cout << &*&c << " = pc = " << pc << endl;
    return 0;
}
