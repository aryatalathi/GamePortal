#include <iostream>
#include "GuessGame.h"
#include "TicTacToeGame.h"
#include "SnakeAndLadderGame.h"
#include "QuizGame.h"

using namespace std;

int main() {
    int choice;
    cout << "Welcome to the Game Hub!" << endl;
    cout << "Choose a game to play:" << endl;
    cout << "1. Guess Game" << endl;
    cout << "2. Tic Tac Toe" << endl;
    cout << "3. Snake and Ladder" << endl;
    cout << "4. Quiz Game" << endl;
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    switch (choice) {
        case 1: {
            GuessGame guessGame;
            guessGame.playGame();
            break;
        }
        case 2: {
            TicTacToeGame ticTacToeGame;
            ticTacToeGame.playGame();
            break;
        }
        case 3: {
            SnakeAndLadderGame snakeAndLadderGame;
            snakeAndLadderGame.playGame();
            break;
        }
        case 4: {
            QuizGame quizGame;
            quizGame.playGame();
            break;
        }
        default:
            cout << "Invalid choice. Please choose a number from 1 to 4." << endl;
    }

    return 0;
}



