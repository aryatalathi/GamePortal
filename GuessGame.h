#ifndef GUESSGAME_H
#define GUESSGAME_H
#include <string>

class GuessGame {
public:
    //GuessGame();
    void players();
    void playGame();

private:
    int secretNumber;
    int guess;
    int attempts;
    std::string player1Name;
    std::string player2Name;
    int hardGuess();
    int mediumGuess();
    int easyGuess();
    int player1Points = 0;
    int player2Points = 0;
    int Guess();
};

#endif // GUESSGAME_H
