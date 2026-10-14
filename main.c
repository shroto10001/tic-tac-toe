#include<stdio.h>
#include<string.h>
#include<ctype.h>
char board[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
char name1[50], name2[50];
void instructions();
void x0choice();
int wincheck(board[3][3]);
int fullcheck(board[3][3]);
int main()
{
    
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
    char c1;
    printf("Player 1, enter your choice between X or 0");
    scanf(" %c", &c1); 
    c=tolower(c1);
    switch(c1)
        {
            case 'x':
            printf("Since player 1 has chosen X, player 2 will go with 0");
            c2='0';
            break;
            case '0':
            printf("Since player 1 has chosen 0, player 2 will go with X");
            c2='x';
            break;
            default :
            printf("Invalid choice! enter X or 0");
        }
}
void board(board[3][3])
{
    int i,j,k=1;
    for (i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
                  { 
                     printf(" %c ",board[i][j]);
                     if(j<2)
                     printf("|");
                  }
            printf("\n");
            if(i<2)
            printf("---+---+---");
        }
                    
}
int wincheck(board[3][3])
{
    int i=0;
    //checking rows
    for(i=0;i<3;i++)
    {
    if(board[i][0]==board[i][1] && board[i][1]==board[i][2])
        return 1;
    if(board[0][i]==board[1][i] && board[1][i]==board[2][i])
        return 1; 
    }
    //checking diagonals
    if(board[0][0]==board[1][1] && board[1][1]==board[2][2])
        return 1;
    if(board[0][2]==board[1][1] && board[1][1]==board[2][0])
        return 1;

    return 0;
}
int fullcheck(board[3][3])
{
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if (board[i][j]!='X'||board[i][j]!='0'||board[i][j]!='x')
            return 0;
        }
        else return 1;
    }
}
void play()
{
    int f=0,turn=0,i,pos;
        while(f=0)
        {
            if(turn%2==0)
                {
                    printf("%s (%c), its your turn! choose the position to place your %c",name1 , c1);
                    scanf("%d",&pos);
                }
            else
                {
                    printf("%s (%c), its your turn! choose the position to place your %c",name2 , c2);
                    scanf("%d",&pos);
                }
            t++;
        }
}
    