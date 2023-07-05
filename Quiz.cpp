#include<iostream>
#include<bits/stdc++.h>

using namespace std;

//QuizGame
int hardQuiz(){
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

int mediumQuiz(){
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
            points += hardQuiz();
        }
    

        int totalmediumpoints = points;
        return totalmediumpoints;
}

int easyQuiz(){
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
            points += mediumQuiz();
        }
    

        int totaleasypoints = points;
        return totaleasypoints;
}

void QuizGame(){
    cout<<"\tGUESS THE RIGHT NUMBER\t"<<endl;
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
}


int main(){
    QuizGame();
    return 0;
}