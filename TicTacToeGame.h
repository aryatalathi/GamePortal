#ifndef TICTACTOEGAME_H
#define TICTACTOEGAME_H

class TicTacToeGame {
private:
    static char board[3][3];
    static int row, col;
    static char token;
    static bool draw;
    std::string player1, player2;

public:
    TicTacToeGame();
    void display();
    void game();
    bool GameOver();
    void players();
    void decideWin();
    void playGame();
};

#endif // TICTACTOEGAME_H
