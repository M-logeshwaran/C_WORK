#include <stdio.h>

int main() {
   int n;
   printf("Enter the size : ");
   scanf("%d",&n);
   int arr[n];
   for(int i=0;i<n;i++)
   {
       printf("Enter the value at %d : ",i);
       scanf("%d",&arr[i]);
   }
   printf("\nArray sorted: ");
   for(int i=0;i<n;i++)
   {
       for(int j=i;j<n;j++)
       {
           if(arr[i]>arr[j])
           {
               int temp=arr[i];
               arr[i]=arr[j];
               arr[j]=temp;
           }
       }  
   }
   for(int i=0;i<n;i++)
  {
    printf("%d ",arr[i]);
  }
  for(int i=0;i<n;i++)
  {
      for(int j=i;j<n;j++)
      {
          if(arr[i]==arr[j] && i!=j)
          {
              for(int k=j;k<n;k++)
              {
                  arr[k]=arr[k+1];
              }
              n=n-1;
              j=j-1;
          }
      }
  }
  printf("\n\nDistinct elements :");
  for(int i=0;i<n;i++)
  {
    printf("%d ",arr[i]);
  }
  printf("\n\n3D ARRAY or MATRIX : ");
  int row,col,face;
  printf("Enter the values [ row , column , face ] : ");
  scanf("%d %d %d",&row,&col,&face);
  int arr1[row][col][face];
  for(int i=0;i<face;i++)
  {
      for(int j=0;j<row;j++)
      {
          for(int k=0;k<col;k++)
          {
              printf("\nEnter at %d face %d column %d row :",i,k,j);
              scanf("%d",&arr1[i][j][k]);
          }
      }
  }
  for(int i=0;i<face;i++)
  {
    printf("FACE %d : \n\n",i+1);
      for(int j=0;j<row;j++)
      {
          for(int k=0;k<col;k++)
          {
              printf("%d ",arr1[i][j][k]);
          }
          printf("\n");
      }
      printf("\n");
  }
  return 0;
} 