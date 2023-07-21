#ifndef GUESSGAME_H
#define GUESSGAME_H

class GuessGame {
public:
    void players();
    void playGame();

private:
    int hardGuess();
    int mediumGuess();
    int easyGuess();
};

#endif // GUESSGAME_H
