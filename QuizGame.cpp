#include<iostream>
#include<bits/stdc++.h>
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
#include "QuizGame.h"
//QuizGame

void QuizGame::players() {
    cout << "Enter the name of Player 1: "<<endl;
    cin>>player1Name;
    cout << "Enter the name of Player 2: "<<endl;
    cin>>player2Name;
}

int QuizGame::hardQuiz(){
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

int QuizGame:: mediumQuiz(){
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
        cout<<"Do you want to play hard level?? 1. YES 2. NO "<<endl;
        int response;
        cin>>response;
        if(response == 1){
            points += hardQuiz();
        }
    

        int totalmediumpoints = points;
        return totalmediumpoints;
}

int QuizGame:: easyQuiz(){
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

        cout<<"Do you want to play medium level?? 1.YES 2.NO"<<endl;
        int response;
        cin>>response;
        if(response == 1){
            points += mediumQuiz();
        }
    

        int totaleasypoints = points;
        return totaleasypoints;
}

int QuizGame:: Quiz(){
    cout<<"\tANSWER THE CORRECT QUSTION\t"<<endl;
    int totaleasypoints=0, totalmediumpoints=0, totalhardpoints=0;

    //cout<<"\n" <<player1name <<" will play first"<<endl;
    cout<<"\tCHOOSE LEVEL\t"<<endl;
    cout<<"\t1. Easy"<<"\t2. Medium"<<"\t3. Hard"<<endl;
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

    return totalPoints;    
    //displayMenu();
}

void QuizGame:: playGame(){
        players();

        cout << player1Name << " WILL PLAY FIRST!" << endl;
        player1Points = Quiz();
        cout << player2Name << "WILL PLAY NOW!" << endl;
        player2Points = Quiz();

        cout << player1Name << " GOT " << player1Points << " POINTS IN THIS GAME!!!" << endl;
        cout << player2Name << " GOT " << player2Points << " POINTS IN THIS GAME!!!" << endl;


        // cout<<"\tCHOOSE THE RIGHT ANSWER\t"<<endl;
        // int totaleasypoints=0, totalmediumpoints=0, totalhardpoints=0;

        // cout<<"\tCHOOSE LEVEL\t"<<endl;
        // cout<<"\t1. Easy"<<"\t2. Medium"<<"\t3.Hard"<<endl;
        // int level;
        // cin>>level;

        // switch(level){
        //         case 1 : totaleasypoints = easyQuiz();
        //                         break;
        //         case 2 : totaleasypoints = mediumQuiz();
        //                         break;
        //         case 3 : totaleasypoints = hardQuiz();
        //                         break;
        // }

        // int totalPoints = 0;
        // totalPoints += totaleasypoints+totalmediumpoints+totalhardpoints;
        // cout<<"Congratulations!!! You got total "<<totalPoints<<" points!!!"<<endl;
    
    
}


// int main(){
//     QuizGame game;
//     game.playGame();
//     return 0;
// }