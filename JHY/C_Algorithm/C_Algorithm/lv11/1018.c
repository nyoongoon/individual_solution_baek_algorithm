#include<stdio.h>
#include<stdlib.h>
 
int main(void)
{
 
    int height, width;
    char **board;
    char chess[50][50];
    int i,j;

    scanf("%d %d", &height, &width);
    board=(char**)malloc(sizeof(char*)*height);
    for(i=0; i<height; i++)
    {
        board[i] = (char*)malloc(sizeof(char)*width);
    }
    
    if(board[0][0] == "B")
    {
        for(i=0; i<height; i++)
        {
            for(j=0; j<width; j++)
            {
                board[i][j] = i+j+1;
            }
        }
    }
    for(i=0; i<height; i++)
    {
        for(j=0; j<width; j++)
        {
            printf("%3c", board[i][j]);
        }
        printf("\n");
    }
 
    for(i=0; i<height; i++)
    {
        free(board[i]);
    }
    free(board);
    return 0;
}
