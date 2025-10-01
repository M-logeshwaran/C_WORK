#include <stdio.h>
int main()
{
  int n;
  printf("Enter th number of element : ");
  scanf("%d",&n);
  int arr[n];
  for(int i=0;i<n;i++)
  {
     printf("Enter  at position %d : ",i+1);
     scanf("%d[^\n]",&arr[i]);
  }

  // MAX
  int max=arr[0];
  for(int i=0;i<n;i++)
  {
     if(max<arr[i])
     {
        max=arr[i];
     }
  }
  printf("The First largest value is %d !\n",max);

  // SECOND MAX
  int smax=arr[0];
  for(int i=0;i<n;i++)
  {
      if(max>arr[i] && smax<arr[i])
      {
          smax=arr[i];
      }
  }
  printf("the second largest value is %d !\n",smax);

  // is Contain duplicate
  int dup=0,a=0;
  for(int i=0;i<n;i++)
  {
      for(int j=i;j<n;j++)
      {
         if(i!=j && arr[i]==arr[j])
         {
            dup=1;
            a=a+1;
            break;
         }
      }
  }
  if(dup==1)
  {
     printf("\nContain duplicate :");
     printf("\nThe no of count is %d",a);
  }
  else
  {
     printf("\nit's not contain duplicate");
  }
  return 0;        
}  
    