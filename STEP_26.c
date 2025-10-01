#include <stdio.h>
#include <conio.h>

int main()
{
    int col,row;
    printf("enter row and column :");
    scanf("%d %d",&row,&col);
    printf("\nYou selected [ %d ] rows and [ %d ] columns Matrixes !\nEnter The Values :\n",row,col);
    int arr[row][col],i,j;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("enter at %d:%d = ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\nYour matrix :\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
             printf("%d ",arr[i][j]);
        }
        printf("\n");
    }    
    return 0;
    
}
