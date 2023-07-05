#include<iostream>
#include<bits/stdc++.h>
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<time.h>

using namespace std;

void displayMenu(){
    cout<<"\t1. Guess Game"<<endl;
    cout<<"\t2. Snake & Ladder"<<endl;
    cout<<"\t3. Quiz Game"<<endl;
    cout<<"\t4. Tic Tac Toe"<<endl;
    cout<<"\t5. Exit"<<endl;
}
/*------------------------------------------------------------------------------------------------------------------------*/
//GuessGame
int hardGuess(){
        int points = 0;
        int ansone, anstwo, ansthree;
        cout<<"Q1. I'm three digit palindromic number, which is the difference between two three digit palindromic squares, can you guess which number am I?"<<endl;
        cin>>ansone;
        if(ansone == 363){
                cout<<"Correct answer"<<endl;
                cout<<"Two points added!!!"<<endl;
                points += 2;
        }
        else{
                cout<<"Oops! Wrong answer"<<endl;
                cout<<"Try again! : "<<endl;
                cin>>ansone;
                if(ansone == 363){
                        cout<<"Correct answer"<<endl;
                        cout<<"One point added!!!"<<endl;
                        points += 1;
                }
                else{
                        cout<<"Oops! Wrong answer"<<endl;
                        cout<<"Sorry! No points added"<<endl;
                }
        }
        cout<<"Q2. I'm only two  digit palindromic number in fibonacci series, I am also the one who sums up first 10 digits in itsself, can you guess which number am I?"<<endl;
        cin>>anstwo;
        if(anstwo == 55){
                cout<<"Correct answer"<<endl;
                cout<<"Two points added!!!"<<endl;
                points += 2;
        }
        else{
                cout<<"Oops! Wrong answer"<<endl;
                cout<<"Try again! : "<<endl;
                cin>>anstwo;
                if(anstwo == 55){
                        cout<<"Correct answer"<<endl;
                        cout<<"One point added!!!"<<endl;
                        points += 1;
                }
                else{
                        cout<<"Oops! Wrong answer"<<endl;
                        cout<<"Sorry! No points added"<<endl;
                }
        }
        cout<<"Q3. We are two three digit squares, we are reverse of each other and our square roots are also reverse of each other, though we are not palindromes, our addition is palinfrom, can you guess what is our addition?"<<endl;
        cin>>ansthree;
        if(ansthree == 585){
                cout<<"Correct answer"<<endl;
                cout<<"Two points added!!!"<<endl;
                points += 2;
        }
        else{
                cout<<"Oops! Wrong answer"<<endl;
                cout<<"Try again! : "<<endl;
                cin>>anstwo;
                if(ansthree == 585){
                        cout<<"Correct answer"<<endl;
                        cout<<"One point added!!!"<<endl;
                        points += 1;
                }
                else{
                        cout<<"Oops! Wrong answer"<<endl;
                        cout<<"Sorry! No points added"<<endl;
                }
        }
        int totalhardpoints = points;
        return totalhardpoints;
}

int mediumGuess(){
        int points = 0;
        int ansone, anstwo, ansthree;
        cout<<"Q1. I'm four digit square of a two digit number, I am he maximum number of computer memory addresses that can be referenced with ten binary switches, can you guess which number am I?"<<endl;
        cin>>ansone;
        if(ansone == 1024){
                cout<<"Correct answer"<<endl;
                cout<<"Two points added!!!"<<endl;
                points += 2;
        }
        else{
                cout<<"Oops! Wrong answer"<<endl;
                cout<<"Try again! : "<<endl;
                cin>>ansone;
                if(ansone == 1024){
                        cout<<"Correct answer"<<endl;
                        cout<<"One point added!!!"<<endl;
                        points += 1;
                }
                else{
                        cout<<"Oops! Wrong answer"<<endl;
                        cout<<"Sorry! No points added"<<endl;
                }
        }
        cout<<"Q2. I am a three digit number, My squareroot is a square of a square, can you guess which number am I?"<<endl;
        cin>>anstwo;
        if(anstwo == 256){
                cout<<"Correct answer"<<endl;
                cout<<"Two points added!!!"<<endl;
                points += 2;
        }
        else{
                cout<<"Oops! Wrong answer"<<endl;
                cout<<"Try again! : "<<endl;
                cin>>anstwo;
                if(anstwo == 256){
                        cout<<"Correct answer"<<endl;
                        cout<<"One point added!!!"<<endl;
                        points += 1;
                }
                else{
                        cout<<"Oops! Wrong answer"<<endl;
                        cout<<"Sorry! No points added"<<endl;
                }
        }
        cout<<"Q3. I am the only three digit palindromic number with palindromic squareroot and palindromic square, can you guess which number am I?"<<endl;
        cin>>ansthree;
        if(ansthree == 121){
                cout<<"Correct answer"<<endl;
                cout<<"Two points added!!!"<<endl;
                points += 2;
        }
        else{
                cout<<"Oops! Wrong answer"<<endl;
                cout<<"Try again! : "<<endl;
                cin>>anstwo;
                if(ansthree == 121){
                        cout<<"Correct answer"<<endl;
                        cout<<"One point added!!!"<<endl;
                        points += 1;
                }
                else{
                        cout<<"Oops! Wrong answer"<<endl;
                        cout<<"Sorry! No points added"<<endl;
                }
        }
        cout<<"Do you want to play hard level??"<<endl;
        string response;
        cin>>response;
        if(response == "YES" || response == "yes" || response == "y"){
            points += hardGuess();
        }
    

        int totalmediumpoints = points;
        return totalmediumpoints;
}

int easyGuess(){
        int points = 0;
        int ansone, anstwo, ansthree;
        cout<<"Q1. I'm only even prime mumber, can you guess which number am I?"<<endl;
        cin>>ansone;
        if(ansone == 2){
                cout<<"Correct answer"<<endl;
                cout<<"Two points added!!!"<<endl;
                points += 2;
        }
        else{
                cout<<"Oops! Wrong answer"<<endl;
                cout<<"Try again! : "<<endl;
                cin>>ansone;
                if(ansone == 2){
                        cout<<"Correct answer"<<endl;
                        cout<<"One point added!!!"<<endl;
                        points += 1;
                }
                else{
                        cout<<"Oops! Wrong answer"<<endl;
                        cout<<"Sorry! No points added"<<endl;
                }
        }
        cout<<"Q2. I'm only number which is not positive and not negative, can you guess which number am I?"<<endl;
        cin>>anstwo;
        if(anstwo == 0){
                cout<<"Correct answer"<<endl;
                cout<<"Two points added!!!"<<endl;
                points += 2;
        }
        else{
                cout<<"Oops! Wrong answer"<<endl;
                cout<<"Try again! : "<<endl;
                cin>>anstwo;
                if(anstwo == 0){
                        cout<<"Correct answer"<<endl;
                        cout<<"One point added!!!"<<endl;
                        points += 1;
                }
                else{
                        cout<<"Oops! Wrong answer"<<endl;
                        cout<<"Sorry! No points added"<<endl;
                }
        }
        cout<<"Q3. I'm square of one number and also a cube of other number, I got two digit, can you guess which number am I?"<<endl;
        cin>>ansthree;
        if(ansthree == 64){
                cout<<"Correct answer"<<endl;
                cout<<"Two points added!!!"<<endl;
                points += 2;
        }
        else{
                cout<<"Oops! Wrong answer"<<endl;
                cout<<"Try again! : "<<endl;
                cin>>anstwo;
                if(ansthree == 64){
                        cout<<"Correct answer"<<endl;
                        cout<<"One point added!!!"<<endl;
                        points += 1;
                }
                else{
                        cout<<"Oops! Wrong answer"<<endl;
                        cout<<"Sorry! No points added"<<endl;
                }
        }

        cout<<"Do you want to play medium level??"<<endl;
        string response;
        cin>>response;
        if(response == "YES" || response == "yes" || response == "y"){
            points += mediumGuess();
        }
    

        int totaleasypoints = points;
        return totaleasypoints;
}

void GuessGame(){
    cout<<"\tGUESS THE RIGHT NUMBER\t"<<endl;
    int totaleasypoints=0, totalmediumpoints=0, totalhardpoints=0;

    cout<<"\tCHOOSE LEVEL\t"<<endl;
    cout<<"\t1. Easy"<<"\t2. Medium"<<"\t3.Hard"<<endl;
    int level;
    cin>>level;

    switch(level){
            case 1 : totaleasypoints = easyGuess();
                        break;
            case 2 : totaleasypoints = mediumGuess();
                        break;
            case 3 : totaleasypoints = hardGuess();
                        break;
    }

    int totalPoints = 0;
    totalPoints += totaleasypoints+totalmediumpoints+totalhardpoints;
    cout<<"Congratulations!!! You got total "<<totalPoints<<" points!!!"<<endl;

    displayMenu();
}

/*------------------------------------------------------------------------------------------------------------------------*/

void SLboard() 
{
    system("cls");
    
    cout << "\n\t\tSNAKES \n";
   
    cout << "\n\tFrom 98 to 28 \n\tFrom 95 to 24\n\tFrom 92 to 51\n\tFrom 83 to 19\n\tFrom 73 to 1\n\tFrom 69 to 33\n\tFrom 64 to 36\n\tFrom 59 to 17\n\tFrom 55 to 7\n\tFrom 52 to 11\n\tFrom 48 to 9\n\tFrom 46 to 5\n\tFrom 44 to 22\n\n";
 
    cout << "\n\t\t LADDERS \n";

    cout << "\n\tFrom 8 to 26\n\tFrom 21 to 82\n\tFrom 43 to 77\n\tFrom 50 to 91\n\tFrom 62 to 96\n\tFrom 66 to 87\n\tFrom 80 to 100\n";

    cout << endl;
}

void gamescore(char name1[], char name2[], int p1, int p2) 
{
    cout << "\n\t\tSTATUS\n";
    cout << "\n\t" << name1 << " is at position " << p1 << endl;
    cout << "\t" << name2 << " is at position " << p2 << endl;
}

void play_dice(int & score) 
{
    int dice;
    dice = rand()%6 + 1;
    cout << "\nYou got " << dice << " Point !! ";
    score = score + dice;
    cout << "Now you are at position " << score;
    switch (score) 
	{
    case 98:
        score = 28;
        break;
    case 95:
        score = 24;
        break;
    case 92:
        score = 51;
        break;
    case 83:
        score = 19;
        break;
    case 73:
        score = 1;
        break;
    case 69:
        score = 33;
        break;
    case 64:
        score = 36;
        break;
    case 59:
        score = 17;
        break;
    case 55:
        score = 7;
        break;
    case 52:
        score = 11;
        break;
    case 48:
        score = 9;
        break;
    case 46:
        score = 5;
        break;
    case 44:
        score = 22;
        break;
    case 8:
        score = 26;
        break;
    case 21:
        score = 82;
        break;
    case 43:
        score = 77;
        break;
    case 50:
        score = 91;
        break;
    case 54:
        score = 93;
        break;
    case 62:
        score = 96;
        break;
    case 66:
        score = 87;
        break;
    case 80:
        score = 100;
    }
}
void callFunctions(){
    void SLboard();
    void gamescore(char name1[], char name2[], int p1, int p2);
    void play_dice(int & score);
}

void SnakeAndLadderGame(){

    callFunctions();

    int player1 = 0, player2 = 0, lastposition;
    char player1name[80], player2name[80];
    system("cls");
    // randomize();
   
    cout << "\t\tSNAKE LADDER GAME"<<endl;
    
    cout << "Enter Name of player 1 : "<<endl;
    cin>>player1name;
    
    cout << "Enter Name of player 2 : "<<endl;
    cin>>player2name;

    while (player1 <= 100 && player2 <= 100) 
	{
        SLboard();
        gamescore(player1name, player2name, player1, player2);
        cout << "\n" << player1name << " Now your Turn >> Press y to play";
        getch();

        lastposition = player1;
        
        play_dice(player1);
        
        if (player1 < lastposition)
            cout << "\n\aOops!! Snake found !! You are at postion " << player1 << "\n";
        else if (player1 > lastposition + 6)
            cout << "\nGreat!! you got a ladder !! You are at position " << player1;
            cout << "\n" << player2name << ", your Turn >> Press y to play ";
        getch();
        
        lastposition = player2;
        
        play_dice(player2);

        if (player2 < lastposition)
            cout << "\n\n\aOops!! Snake found !! You are at position " << player2 << "\n";
        else if (player2 > lastposition + 6)
            cout << "\n\nGreat!! you got a ladder !! You are at position " << player2 << "\n";
        getch();
    }

    system("cls");
    
    cout << "\t\tRESULTS\t\t";
    
    gamescore(player1name, player2name, player1, player2);
   
    if (player1 >= player2)
        cout << "\n" << player1name << " is the winner!!!\n";
    else
        cout << "\n" << player2name << " is the winner!!!\n";
    
    getch();

    displayMenu();

}



/*---------------------------------------------------------------------------------------------------------------------------------------*/
int hardQuiz(){
        int points = 0;
        int ansone, anstwo, ansthree;
        cout<<"Q1. Which of the following is not an application of Breadth First Search??"<<endl;
        cout<<"\n1. Finding shortest path between two nodes \t2. Finding bipartiteness of a graph \t3. GPS navigation system \t4. Path Finding"<<endl;
        cin>>ansone;
        if(ansone == 4){
                cout<<"Correct answer"<<endl;
                cout<<"Two points added!!!"<<endl;
                points += 2;
        }
        else{
                cout<<"Oops! Wrong answer"<<endl;
                cout<<"Try again! : "<<endl;
                cin>>ansone;
                if(ansone == 4){
                        cout<<"Correct answer"<<endl;
                        cout<<"One point added!!!"<<endl;
                        points += 1;
                }
                else{
                        cout<<"Oops! Wrong answer"<<endl;
                        cout<<"Sorry! No points added"<<endl;
                }
        }
        cout<<"Q2. Which of the following statements is true?"<<endl;
        cout<<"\n1. Recursion is always better than iteration \t2. Recursion uses more memory compared to iteration \t3. Recursion uses less memory compared to iteration \t4.Iteration is always better and simpler than recursion"<<endl;
        cin>>anstwo;
        if(anstwo == 2){
                cout<<"Correct answer"<<endl;
                cout<<"Two points added!!!"<<endl;
                points += 2;
        }
        else{
                cout<<"Oops! Wrong answer"<<endl;
                cout<<"Try again! : "<<endl;
                cin>>anstwo;
                if(anstwo == 2){
                        cout<<"Correct answer"<<endl;
                        cout<<"One point added!!!"<<endl;
                        points += 1;
                }
                else{
                        cout<<"Oops! Wrong answer"<<endl;
                        cout<<"Sorry! No points added"<<endl;
                }
        }
        cout<<"Q3. If a simple graph G, contains n vertices and m edges, the number of edges in the Graph G'(Complement of G) is "<<endl;
        cout<<"\n 1.(n*n-n-2*m)/2 \t2. (n*n+n+2*m)/2 \t3.(n*n-n-2*m)/2 \t4.(n*n-n+2*m)/2"<<endl;
        cin>>ansthree;
        if(ansthree == 1){
                cout<<"Correct answer"<<endl;
                cout<<"Two points added!!!"<<endl;
                points += 2;
        }
        else{
                cout<<"Oops! Wrong answer"<<endl;
                cout<<"Try again! : "<<endl;
                cin>>anstwo;
                if(ansthree == 1){
                        cout<<"Correct answer"<<endl;
                        cout<<"One point added!!!"<<endl;
                        points += 1;
                }
                else{
                        cout<<"Oops! Wrong answer"<<endl;
                        cout<<"Sorry! No points added"<<endl;
                }
        }
        int totalhardpoints = points;
        return totalhardpoints;
}

int mediumQuiz(){
        int points = 0;
        int ansone, anstwo, ansthree;
        cout<<"Q1. In BFS, how many times a node is visited?"<<endl;
        cout<<"\n1. Once \t2. n times \t3. Equivalent to number of indegree of the node \t4. Twice"<<endl;
        cin>>ansone;
        if(ansone == 3){
                cout<<"Correct answer"<<endl;
                cout<<"Two points added!!!"<<endl;
                points += 2;
        }
        else{
                cout<<"Oops! Wrong answer"<<endl;
                cout<<"Try again! : "<<endl;
                cin>>ansone;
                if(ansone == 3){
                        cout<<"Correct answer"<<endl;
                        cout<<"One point added!!!"<<endl;
                        points += 1;
                }
                else{
                        cout<<"Oops! Wrong answer"<<endl;
                        cout<<"Sorry! No points added"<<endl;
                }
        }
        cout<<"Q2. Depth First Search is equivalent to which of the traversal in the Binary Trees?"<<endl;
        cout<<"\n1. PostOrder \t2. PreOrder \t3. InOrder \t4. LevelOrder"<<endl;
        cin>>anstwo;
        if(anstwo == 1){
                cout<<"Correct answer"<<endl;
                cout<<"Two points added!!!"<<endl;
                points += 2;
        }
        else{
                cout<<"Oops! Wrong answer"<<endl;
                cout<<"Try again! : "<<endl;
                cin>>anstwo;
                if(anstwo == 1){
                        cout<<"Correct answer"<<endl;
                        cout<<"One point added!!!"<<endl;
                        points += 1;
                }
                else{
                        cout<<"Oops! Wrong answer"<<endl;
                        cout<<"Sorry! No points added"<<endl;
                }
        }
        cout<<"Q3. Recursion is similar to which of the following?"<<endl;
        cout<<"\n1. if-else \t2. Switch-Case \t3. Loop \t4. if elif else"<<endl;
        cin>>ansthree;
        if(ansthree == 3){
                cout<<"Correct answer"<<endl;
                cout<<"Two points added!!!"<<endl;
                points += 2;
        }
        else{
                cout<<"Oops! Wrong answer"<<endl;
                cout<<"Try again! : "<<endl;
                cin>>anstwo;
                if(ansthree == 3){
                        cout<<"Correct answer"<<endl;
                        cout<<"One point added!!!"<<endl;
                        points += 1;
                }
                else{
                        cout<<"Oops! Wrong answer"<<endl;
                        cout<<"Sorry! No points added"<<endl;
                }
        }
        cout<<"Do you want to play hard level??"<<endl;
        string response;
        cin>>response;
        if(response == "YES" || response == "yes" || response == "y"){
            points += hardQuiz();
        }
    

        int totalmediumpoints = points;
        return totalmediumpoints;
}

int easyQuiz(){
        int points = 0;
        int ansone, anstwo, ansthree;
        cout<<"Q1. What is the maximum number of edges in a bipartite graph having 10 vertices?"<<endl;
        cout<<"\n1. 24 \t2. 21 \t3. 25 \t4.16"<<endl;
        cin>>ansone;
        if(ansone == 3){
                cout<<"Correct answer"<<endl;
                cout<<"Two points added!!!"<<endl;
                points += 2;
        }
        else{
                cout<<"Oops! Wrong answer"<<endl;
                cout<<"Try again! : "<<endl;
                cin>>ansone;
                if(ansone == 3){
                        cout<<"Correct answer"<<endl;
                        cout<<"One point added!!!"<<endl;
                        points += 1;
                }
                else{
                        cout<<"Oops! Wrong answer"<<endl;
                        cout<<"Sorry! No points added"<<endl;
                }
        }
        cout<<"Q2.  For a given graph G having v vertices and e edges which is connected and has no cycles, which of the following statements is true?"<<endl;
        cout<<"\n1. v=e \t2. v=e+1 \t3. v+1=e \t4. v=e-1"<<endl;
        cin>>anstwo;
        if(anstwo == 2){
                cout<<"Correct answer"<<endl;
                cout<<"Two points added!!!"<<endl;
                points += 2;
        }
        else{
                cout<<"Oops! Wrong answer"<<endl;
                cout<<"Try again! : "<<endl;
                cin>>anstwo;
                if(anstwo == 2){
                        cout<<"Correct answer"<<endl;
                        cout<<"One point added!!!"<<endl;
                        points += 1;
                }
                else{
                        cout<<"Oops! Wrong answer"<<endl;
                        cout<<"Sorry! No points added"<<endl;
                }
        }
        cout<<"Q3. What is the space complexity for deleting a linked list??"<<endl;
        cout<<"n1.O(n) \t2. O(1) \t3. O(logn) \t4. None of the above"<<endl;
        cin>>ansthree;
        if(ansthree == 2){
                cout<<"Correct answer"<<endl;
                cout<<"Two points added!!!"<<endl;
                points += 2;
        }
        else{
                cout<<"Oops! Wrong answer"<<endl;
                cout<<"Try again! : "<<endl;
                cin>>anstwo;
                if(ansthree == 2){
                        cout<<"Correct answer"<<endl;
                        cout<<"One point added!!!"<<endl;
                        points += 1;
                }
                else{
                        cout<<"Oops! Wrong answer"<<endl;
                        cout<<"Sorry! No points added"<<endl;
                }
        }

        cout<<"Do you want to play medium level??"<<endl;
        string response;
        cin>>response;
        if(response == "YES" || response == "yes" || response == "y"){
            points += mediumQuiz();
        }
    

        int totaleasypoints = points;
        return totaleasypoints;
}

void QuizGame(){
    cout<<"\tGUESS THE RIGHT ANSWER\t"<<endl;
    int totaleasypoints=0, totalmediumpoints=0, totalhardpoints=0;

    cout<<"\tCHOOSE LEVEL\t"<<endl;
    cout<<"\t1. Easy"<<"\t2. Medium"<<"\t3.Hard"<<endl;
    int level;
    cin>>level;

    switch(level){
            case 1 : totaleasypoints = easyQuiz();
                        break;
            case 2 : totaleasypoints = mediumQuiz();
                        break;
            case 3 : totaleasypoints = hardQuiz();
                        break;
    }

    int totalPoints = 0;
    totalPoints += totaleasypoints+totalmediumpoints+totalhardpoints;
    cout<<"Congratulations!!! You got total "<<totalPoints<<" points!!!"<<endl;

    displayMenu();
}


/*-------------------------------------------------------------------------------------------------------------------------------*/


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

void xogame(){
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
        xogame();
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
        xogame();
        GameOver();
    }
    decideWin();
    displayMenu();
}

int main(){
    cout<<"\tWelcome to the Game Portal!\n"<<endl;

    displayMenu();
    int choice;
    cout<<"\nWhich Game do you want to play?"<<endl;
    cin>>choice;

    switch(choice){
        case 0 : displayMenu();
                break;
        case 1 : GuessGame();
                break;
        case 2 : SnakeAndLadderGame();
                break;
        case 3 : QuizGame();
                break;
        case 4 : TicTacToeGame();
                break;
        case 5 : cout<<"Thank You! Visit Again! :)"<<endl;
                break;  
    }
    return 0;
}