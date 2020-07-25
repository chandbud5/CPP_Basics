#include <iostream>

using namespace std;

int main()
{
    // = is also assignment operator
    int a = 5;
    cout << a << endl;
    // += addition assignment a = a+5
    a += 5;
    cout << a << endl;

    // -= sub assign a = a-5
    a -= 4;
    cout << a << endl;

    a *= 4;
    cout << a << endl;

    a /= 3;
    cout << a << endl;

    a %= 5;
    cout << a << endl;

    a &= 2; // a = a&4    3 -> 011, 2->010 (011 & 010) = 010 = 2
    cout << a << endl;

    a |= 4;
    cout << a << endl;

    a^=4;
    cout << a << endl;

    a <<= 3; // a = 2 = 010 << 3 = 010000 = 16
    // similarly >>=
    cout << a << endl;

    return 0;
}
