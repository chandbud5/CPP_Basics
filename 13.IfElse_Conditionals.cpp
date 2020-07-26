#include <iostream>
using namespace std;

void ispos(int a)
{
    if(a>0)
        cout << "It is positive" << endl;
    else if(a==0)
        cout << "It is Zero" << endl;
    else
        cout << "It is negative" << endl;
}

int main()
{
    int x;
    cout << "Enter a number " << endl;
    cin >> x;
    ispos(x);
}
