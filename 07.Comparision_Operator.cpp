#include <iostream>

using namespace std;

int main()
{
    int a = 7, b = 8;
    float c = 7;
    cout << "0 represent False and 1 represent True" << endl;
    cout << "a is " << a << " b is " << b << " c is (float)" << c << endl;
    // parenthesis in following lines are compulsory
    cout << "a == c " << (a == c) << endl;
    cout << "a!=c " << (a != c) << endl;
    cout << "a < b " << (a < b) << endl;
    cout << "b >= c " << (b >= c) << endl;
    return 0;
}
