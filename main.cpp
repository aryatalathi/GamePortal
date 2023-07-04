#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void displayMenu(){
    cout<<"\t1. Snake Game"<<endl;
    cout<<"\t2. Guess Game"<<endl;
    cout<<"\t3. Snake & Ladder"<<endl;
    cout<<"\t4. Quiz Game"<<endl;
    cout<<"\t5. Tic Tac Toe"<<endl;
    cout<<"\t6. Exit"<<endl;
}



int main(){
    cout<<"\t\tWelcome to the Game Portal!\t\t"<<endl;

    displayMenu();
    int choice;
    cin>>choice;

    switch(choice){
        case 0 : displayMenu();
                break;
        case 1 : SnakeGame();
                break;
        case 2 : GuessGame();
                break;
        case 3 : SnakeAndLadder();
                break;
        case 4 : QuizGame();
                break;
        case 5 : TicTacToe();
                break;
        case 6 : cout<<"Thank You! Visit Again! :)"<<endl;
                break;  
    }
    return 0;
}