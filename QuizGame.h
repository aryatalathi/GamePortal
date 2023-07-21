#ifndef QUIZGAME_H
#define QUIZGAME_H
#include <string>

class QuizGame {
public:
    //QuizGame();
    void players();
    void playGame();
    

private: 
    int secretNumber;
    int guess;
    int attempts;
    std::string player1Name;
    std::string player2Name;
    int hardQuiz();
    int mediumQuiz();
    int easyQuiz();
    int player1Points = 0;
    int player2Points = 0;
    int Quiz();
};

#endif // QUIZGAME_H
