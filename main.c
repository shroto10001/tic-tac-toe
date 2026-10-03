#include<stdio.h>
#include<string.h>
int main()
{
    char[50] name1, name2;
    printf("Welcome to Tic-Tac-Toe");
    printf("Enter the name of player 1: ");
    gets(name1);
    printf("Enter the name of player 2: ");
    gets(name2);
    
    printf(instructions());
}
void instructions()
{
    printf("INSTRUCTIONS \n");
    printf("1. Player 1 will get to choose between X and 0. \n2. Player 2 will get to start the game. \n3. Each player will have to select the box no. to place their respective X or 0");
}