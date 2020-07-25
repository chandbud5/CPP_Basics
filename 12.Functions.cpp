#include<iostream>

using namespace std;

int add(int a, int b);
void greet()
{
    cout << "Welcome User" << endl;
}

int main()
{
    greet();
    int x = add(4,7);
    cout << x << endl;
    return 0;
}

int add(int a, int b)
{
    return a+b;
}
