#include<stdio.h>
#include<string.h>
#include<ctype.h>
void instructions();
void x0choice();
int main()
{
    char name1[50], name2[50];
    printf("Welcome to Tic-Tac-Toe");
    printf("Enter the name of player 1: ");
    gets(name1);
    printf("Enter the name of player 2: ");
    gets(name2);
    instructions();
    printf("So ready to begin the game? Lessgooo!");
    x0choice();
}
void instructions()
{
    printf("INSTRUCTIONS: \n");
    printf("1. Player 1 will get to choose between X and 0. \n2. Player 2 will get to start the game. \n3. Each player will have to select the box no. to place their respective X or 0");
}
void x0choice()
{
    char c;
    printf("Player 1, enter your choice between X or 0");
    scanf(" %c", &c); 
    c=tolower(c);
    switch(c)
        {
            case 'x':
            printf("Since player 1 has chosen X, player 2 will go with 0");
            break;
            case '0':
            printf("Since player 1 has chosen 0, player 2 will go with X");
            break;
            default :
            printf("Invalid choice! enter X or 0");
        }
}
void game()
{
    int i,j,k=1;
    for (i=1;i<=9;i++)
        {
            for(j=1;j<=9;j++)
                {
                    printf("%d ",k);
                    k++;
                }
            printf("\n");
        }
                    
}
