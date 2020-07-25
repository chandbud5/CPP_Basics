#include<iostream>
using namespace std;

int main()
{
    int x;
    string s, message;
    char c;
    double d;
    cout << "Enter values"<< endl;
    getline(cin, message);
    cin >> x >> s >> c >> d;
    cout << "Value entered is " << x << s << c << d<< endl;
    cout << message;
    return 0;
}
