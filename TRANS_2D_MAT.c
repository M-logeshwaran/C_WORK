#include<stdio.h>

int main()
{
    int col,row;
    printf("enter row and column :");
    scanf("%d %d",&row,&col);
    printf("\nYou selected [ %d ] rows and [ %d ] columns Matrixes !\nEnter The Values :\n",row,col);

    int arr[row][col],i,j;
    int trans[row][col],sum[row][col];

    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("enter at %d:%d = ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }

    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
             printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    printf("\nthe transpose is:\n");
    for(i=0;i<col;i++)
    {
        for(j=0;j<row;j++)
        {
            trans[i][j] = arr[j][i];
            printf("%d ",trans[i][j]);
        }
        printf("\n");
    }

    printf("\n");
    if(row == col){
        printf("the sum of A matrix and it's transpose\n");
        for(i=0;i<row;i++)
        {
            for(j=0;j<col;j++)
            {
                sum[i][j]=arr[i][j]+trans[i][j];
                printf("%d ",sum[i][j]);
            }
            printf("\n");
        }
    }

    else{
        printf("The Sum necessary Condition was failed !\n");
    }
    return 0;
    
}