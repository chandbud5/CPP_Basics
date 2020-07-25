#include <iostream>
using namespace std;

int main()
{
    int a = 6;
    float b = 7;
    double c = 7;

    cout << ((a<b) && (b<=c)) << endl;
    cout << ((c > a) || (c < a)) << endl;
    cout << (!(b==c) || (a==b)) << endl;
}
