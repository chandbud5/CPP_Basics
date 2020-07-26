#include <iostream>
using namespace std;

int main()
{
    int i=0;
    while(i<5)
    {
        cout << i << endl;;
        i+=1;
        if(i==3)
        {
            cout << "Breaking loop";
            break;
        }
    }
    return 0;
}
