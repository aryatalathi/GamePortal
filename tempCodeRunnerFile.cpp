
   
    if (player1 >= player2)
        cout << "\n" << player1name << " is the winner!!!\n";
    else
        cout << "\n" << player2name << " is the winner!!!\n";
    
    getch();

}


int main()
{
    SnakeAndLadderGame game;
    game.playGame();
    return 0;
}