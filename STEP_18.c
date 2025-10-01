#include<stdio.h>
#include<math.h>

int main()
{
  int n;
  printf("Enter the length of ARRAY : ");
  scanf("%d",&n);
  int a[100],i,k,h,p;
  for(i=0;i<n;i++)
  {
     printf("Enter the at index %d :",i);
     scanf("%d",&a[i]);
  }
  printf("The array is :" );
  for(i=0;i<n;i++)
  {
     printf("%d ",a[i]);
  }
  printf("\n\nEnter the ELEMENT to insert: ");
  scanf("%d",&k);
  printf("Enter the POSITION : ");
  scanf("%d",&p);
  for(i=p-1;i<n+1;i++)
  {
      h=a[i];
      a[i]=k;
      k=h;
  }
  printf("\nThe UPDATED array is : ");
  for(i=0;i<n+1;i++)
  {
     printf("%d ",a[i]);
  }       
  return 0;
}    
