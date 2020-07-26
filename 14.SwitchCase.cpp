#include <iostream>

using namespace std;

int main()
{
    int c;
    cout << "Enter a case number" << endl;
    cin >> c;
    switch(c)
    {
    case 1:
        cout << "case 1";
        break;
    case 2:
        cout << "Case 2";
        break;
    case 3:
        cout << "Case 3";
        break;
    default:
        cout << "Invalid case number";
    }
    cout << "Switch over" <<endl;
}
