#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    string word, guessword, guessletter;
    string dashes = string(word.length(), '_');
    int numletterguess = 5;
    int numwordguess = 5;
    bool gameover = false;
    bool validletterguess;
    bool validwordguess;

    cout << "Player 1. Enter a word for Player 2 to guess: " << endl;
    getline(cin, word);

    dashes = string(word.length(), '_');

    while (gameover == false && numletterguess > 0 && numwordguess > 0) // start game Round 1. 
    {
        guessletter = "";
        cout << "Player 2, you have " << numletterguess << " letter guesses left and " << numwordguess << " word guesses left. " << endl;
        cout << "Enter your letter guess: " << endl;
        cin >> guessletter; //letter guess

        while (guessletter.length() != 1)  // if the letter guess is more than a single letter, loop until user enters 1 letter.
        {
            cout << "Enter only 1 Letter. " << endl;
            cout << "Try again: " << endl;
            cin >> guessletter;

        }
        numletterguess--;
        validletterguess = false;
        for (int i = 0; i < word.length(); i++) //ignore case
        {
            if (guessletter.at(0) == word.at(i))
            {
                cout << "You guessed a letter correct at position " << i + 1 << " of the word" << endl;
                dashes.at(i) = word.at(i);
                cout << dashes << endl;
                validletterguess = true;
                break;
            }
        }
        if (validletterguess == true) {
            continue;
        }
        else {
            cout << "Wrong letter guessed" << endl;
            cout << "Player 2, you have " << numletterguess << " letter guesses left" << endl;
            cout << "Enter your wordguess" << endl;
            cin >> guessword;
            if (guessword == word) {
                gameover = true;
                break;
            }
            else {
                numwordguess--;
                cout << "You guessed the wrong word!" << endl;
                cout << "You have " << numwordguess << " guess left" << endl;
                continue;
            }
        }
    }
    if (gameover == true)
    {
        cout << "You have beaten the game!" << endl;
    }
    else cout << "Game Over!" << endl;

}
