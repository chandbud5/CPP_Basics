#include <iostream>

using namespace std;

int expo(int base, int pow)
{
    int r = 1;
    for(int i=1; i<=pow ; i++)
    {
        r *= base;
    }
    return r;
}

int main()
{
    int x = expo(3,6);
    cout << x << endl;
    return 0;
}
