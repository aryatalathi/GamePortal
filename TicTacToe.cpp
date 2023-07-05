#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#include<bits/stdc++.h>

using namespace std;

char board[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};
int row, col;
char token = 'X';
bool draw = false;
string player1, player2;

void display(){

    // string player1, player2;

    cout<< "      |      |      " <<endl;
    cout<< " " << board[0][0] <<"    |   "<<board[0][1] << "  |    "<<board[0][2]<<endl;
    cout<< " ____ | ____ | ____ " <<endl;
    cout<< "      |      |      " <<endl;
    cout<< " " << board[1][0] <<"    |   "<<board[1][1] << "  |    "<<board[1][2]<<endl;
    cout<< " ____ | ____ | ____ " <<endl;
    cout<< "      |      |      " <<endl;
    cout<< " " << board[2][0] <<"    |   "<<board[2][1] << "  |    "<<board[2][2]<<endl;
    cout<< "      |      |      " <<endl;

}

void game(){
    int digit;

    if(token == 'X'){
        cout<<"Hey "<<player1<<", Enter your choice"<<endl;
        cin>>digit;
    }
    if(token == 'O'){
        cout<<"Hey "<<player2<<", Enter your choice"<<endl;
        cin>>digit;
    }

    switch(digit){
        case 1 : {
            row = 0;
            col = 0;
            break;
        }
        case 2 : {
            row = 0;
            col = 1;
            break;
        }
        case 3 : {
            row = 0;
            col = 2;
            break;
        }
        case 4 : {
            row = 1;
            col = 0;
            break;
        }
        case 5 : {
            row = 1;
            col = 1;
            break;
        }
        case 6 : {
            row = 1;
            col = 2;
            break;
        }
        case 7 : {
            row = 2;
            col = 0;
            break;
        }
        case 8 : {
            row = 2;
            col = 1;
            break;
        }
        case 9 : {
            row = 2;
            col = 2;
            break;
        }
        default : cout<<"Invalid"<<endl;
    }
    if(token == 'X' && board[row][col] != 'X' && board[row][col] != 'O'){
        board[row][col] = 'X';
        token = 'O';
    }
    else if(token == 'O' && board[row][col] != 'X' && board[row][col] != 'O'){
        board[row][col] = 'O';
        token = 'X';
    }
    else{
        cout<<"Sorry! This place is taken :("<<endl;
        game();
    }
    //display();
}
bool GameOver(){
    for(int i=0; i<3; i++){
        if(board[i][0]  == board[i][1] && board[i][1] == board[i][2] || board[0][i]  == board[1][i] && board[1][i] == board[2][i]){
            return false;
        }
    }

    if(board[0][0] == board[1][1] && board[1][1] == board[2][2] || board[0][2] == board[1][1] && board[1][1] == board[2][0]){
        return false;
    }

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(board[i][j] != 'X' && board[i][j] != 'O'){
                return true;
            }
        }
    }

    draw = true;
    return false;
}
void players(){
    cout<<"Enter name of player 1 : ";
    cin>>player1;

    cout<<"Enter name of player 2 : ";
    cin>>player2;
}
void decideWin(){
    if(token == 'X' && draw == false){
        display();
        cout<<"Congrats "<<" "<<player2<<","<<" you won!!!"<<endl; 
    }
    else if(token == 'O' && draw == false){
        display();
        cout<<"Congrats "<<" "<<player1<<","<<" you won!!!"<<endl;
    }
    else{
        display();
        cout<<"Oh No! It's tie!!"<<endl;
    }
}
void TicTacToeGame(){
    players();
    while(GameOver()){
        display();
        game();
        GameOver();
    }
    decideWin();

}
int main(){
    
    TicTacToeGame();
    return 0;
}