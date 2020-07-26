#include <iostream>
using namespace std;

int main()
{
    bool win=true;
    int guess=0,secret = 6, lives=5;
    while (guess!=secret)
    {

        if(lives==0)
        {
            win = false;
            break;
        }

        cout << "\nYou have " << lives << " guesses left" << endl;
        cout << "Enter your guess";
        lives -= 1;
        cin >> guess ;
        if(guess < secret)
        {
            cout << "Enter a higher number" << endl;
        }
        else if(guess > secret)
            cout << "Enter a lower number"<<endl;
    }
    if(win)
        cout << "You Won" << endl;
    else
        cout << "You Lose" << endl;
    return 0;
}
