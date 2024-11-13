/*
CSCI 1010 Section 001
Lab 10 Pt 1
Number guessing game
Alex Perry
October 23rd, 2024
*/
#include <iostream>
#include <cstdlib>  
using namespace std;

int main() {
    char playAgain = 'y';

    cout << "Welcome to the Number Guessing Game!" << endl;

    while (playAgain == 'y') 
    {
        int guess;
        const int maxAttempts = 10;

        srand(time(0));
        int randomNumber = rand() % 100 + 1;

        cout << "I have selected a number between 1 and 100." << endl;
        cout << "You have " << maxAttempts << " attempts to guess the correct number." << endl;

        for (guess = 1; guess <= maxAttempts; guess++) 
        {
            int playerGuess;
            cout << "\nEnter your guess: ";
            cin >> playerGuess;

            if (playerGuess > randomNumber) 
            {
                cout << "Too high! You have " << (maxAttempts - guess) << " guesses left.";
            } else if (playerGuess < randomNumber) 
            {
                cout << "Too low! You have " << (maxAttempts - guess) << " guesses left.";
            } else {
                cout << "Just right! You guessed the number in " << guess << " attempts!" << endl;
                break;
            }
        }

        if (guess > maxAttempts) 
        {
            cout << "\nSorry, you've used all your attempts. The correct number was " << randomNumber << "." << endl;
        }

        cout << "\nWould you like to play again? (y/n): ";
        cin >> playAgain;

        if (playAgain != 'y') 
        {
            playAgain = 'n';
        }
    }

    cout << "Thanks for playing!" << endl;
    return 0;
}
