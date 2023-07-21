#ifndef SNAKEANDLADDER_H
#define SNAKEANDLADDER_H

class SnakeAndLadderGame {
private:
    // Add any private member variables or functions if needed

public:
    void playGame();
    void gamescore(char name1[], char name2[], int p1, int p2);
    void play_dice(int &score);
    void callFunctions();
    void SLboard(); // Add the declaration of SLboard() function here
};

#endif // SNAKEANDLADDER_H
