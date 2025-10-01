#include<stdio.h>
#include<math.h>
int main()
{
  int r,c,s=0;
  printf("Enter [ row , column ] : ");
  scanf("%d %d",&r,&c);
  int mat[r][c],mat1[r][c];
  printf("\n1st matrix:\n");
  for(int i=0;i<r;i++)
  {
      for(int j=0;j<c;j++)
      {
          printf("Enter at [ %d ] row [ %d ] column : ",i,j);
          scanf("%d",&mat[i][j]);
      }
  }
  printf("\n2nd matrix:\n");
  for(int i=0;i<r;i++)
  {
      for(int j=0;j<c;j++)
      {
          printf("Enter at [ %d ] row [ %d ] column : ",i,j);
          scanf("%d",&mat1[i][j]);
      }
  }
  printf("\nThe 1st matrix is : \n");
  for(int i=0;i<r;i++)
  {
      for(int j=0;j<c;j++)
      {
          printf("%d ",mat[i][j]);
      }
      printf("\n");
  }
  printf("\nThe 2nd matrix is : \n");
  for(int i=0;i<r;i++)
  {
      for(int j=0;j<c;j++)
      {
          printf("%d ",mat1[i][j]);
      }
      printf("\n");
  }
  printf("\nThe transpose of 1st is : \n");
  for(int i=0;i<r;i++)
  {
      for(int j=0;j<c;j++)
      {
          printf("%d ",mat[j][i]);
      }
      printf("\n");
  }
  printf("\nThe transpose of 2nd is : \n");
  for(int i=0;i<r;i++)
  {
      for(int j=0;j<c;j++)
      {
          printf("%d ",mat1[j][i]);
      }
      printf("\n");
  }
  printf("\nThe sum is : \n");
  for(int i=0;i<r;i++)
  {
      for(int j=0;j<r;j++)
      {
          printf("%d ",mat[i][j]+mat1[i][j]);
          
      }
      printf("\n");
  }
  printf("\nThe matrix multiple is : \n");
  for(int i=0;i<r;i++)
  {
      
     for(int j=0;j<r;j++)
     {
          s=0;
         for(int k=0;k<r;k++)
         {
             s=s+mat[i][k]*mat1[k][j];
             
         }
         printf("%d ",s);
     }
    printf("\n");
  }  
  printf("\n");         
  return 0;
}    
