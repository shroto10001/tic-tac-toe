#include<stdio.h>
#include<string.h>
#include<ctype.h>
char board[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
char name1[50], name2[50], c1, c2;
int wincheck();
int fullcheck();
void drawboard();
void play();
void reset();

int main()
{
    char again;
    do{
    reset();
    printf("Welcome to Tic-Tac-Toe");
    printf("\n Enter the name of player 1: ");
    gets(name1);
    printf("\n Enter the name of player 2: ");
    gets(name2);
     printf("\nINSTRUCTIONS: \n");
    printf("1. %s will get to choose between X and 0. \n2. %s will get to start the game. \n3. Each player will have to select the box no. to place their respective X or 0",name1,name2);
    printf("\n So ready to begin the game? Lessgooo!");
    printf("\n %s, enter your choice between X or 0: \n",name1);
    scanf(" %c", &c1); 
    c1=tolower(c1);
    switch(c1)
        {
            case 'x':
            printf("\n Since %s has chosen X, %s will go with 0",name1, name2);
            c2='0';
            break;
            case '0':
            printf("\n Since %s has chosen 0, %s will go with x",name1, name2);
            c2='x';
            break;
            default :
                while(c1!='x' && c1!='0')
                    {
                    printf("\n Invalid choice! enter X or 0");
                    scanf(" %c",&c1);
                    c1=tolower(c1);
                    }   
                    if (c1=='x') c2='0';
                    else c2 ='x';
                break;
            }
            printf("\n");
    drawboard();
    play();
        printf("\n Would you like to play once more? (y/n): \n");
        scanf(" %c",&again);
        
        while(getchar() != '\n')
        {
		}
		
    }while(again=='y'||again=='Y');
        printf("\n Good Game:) Thank you for playing!!");
        return 0;
}
        
void drawboard()
{
    int i,j;
    for (i=0;i<3;i++)
        {
        	printf(" ");
            for(j=0;j<3;j++)
                  { 
                     printf(" %c ",board[i][j]);
                     if(j<2)
                     printf("|");
                  }
            printf("\n");
            if(i<2)
            printf("---+---+---\n");
        }   
}

int wincheck()
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

int fullcheck()
{
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if (board[i][j]>='1' && board[i][j]<='9')
            return 0;
        }
    }
     return 1;
}

void play()
{
    int turn=0,i,pos=0,row,col;
    char symbol;
        while(1)
        {
            if(turn%2!=0)
                {   symbol=c1;
                    printf("\n %s, its your turn! choose the position to place your %c: \n",name1 , c1);
                }
            else
            {
                 symbol=c2;
                    printf("\n %s, its your turn! choose the position to place your %c: \n",name2 , c2);
            }
                    scanf("%d",&pos);
                    row=(pos-1)/3;
                    col=(pos-1)%3;
                    if( pos>9 || pos<1 || board[row][col]==c1 || board[row][col]==c2)
                    {
                        printf("\nInvalid choice");
                        continue;
                    }
                        board[row][col]=symbol;
                        drawboard();
                        if(wincheck())
                        {
                          if(turn%2!=0) printf("\nCONGRATSSS %s!!! you have won the game!",name1);
                          else printf("\n CONGRATSSS %s!!! you have won the game!",name2);
                            break;
                        }
                    if(fullcheck())
                    {
                        printf("\n its a draw");
                        break;
                    }
            turn++;
                }
}
void reset()
{
    int i,j;
	char k='1';
    for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {   board[i][j]=k;
                k++;
             }
        }
}
