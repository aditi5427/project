#include <iostream>
using namespace std;

int main()
{
    int sercetNum = 2;

    int guess;
    int guessCount = 0;
    int guessLimit = 3;
    
    bool outOfGuess = false;

        cout << " ************************* " << endl;
        cout << "Game Start " << endl;

    while (sercetNum != guess && !outOfGuess)
    {


        if (guessCount < guessLimit)
        {
            cout << "Enter Guess: " << endl;
            cin >> guess;
            guessCount++;
        }
        else
        {
            outOfGuess = true;
        }
        
    }
        cout << " *************************" << endl;

    if (outOfGuess)
    {
        cout << "----Oh no... You lose :( !---- " << endl;
    }
    else
    {
        cout << "----Yeah... You win :) !---- " << endl;
    }
    return 0;
}