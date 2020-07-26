#include <iostream>
using namespace std;

int main()
{
    cout << "do While Demonstration" << endl;
    int i = 1;
    do
    {
        cout << i;
        i-=1;
    }
    while(i<0);
}
