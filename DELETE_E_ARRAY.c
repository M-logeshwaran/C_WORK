#include<stdio.h>
#include<math.h>
int main()
{
  int n;
  printf("Enter the Length of ARRAY : ");
  scanf("%d",&n);
  int a[n],i,m,h;
  for(i=0;i<n;i++)
  {
    printf("Enter at index %d : ",i);
    scanf("%d",&a[i]);
  }
  printf("the array is : \n");
  for(i=0;i<n;i++)
  {
    printf("%d ",a[i]);
  }
  printf("\n\nEnter the position to DELETE : ");
  scanf("%d",&m);
  for(i=m-1;i<(n-1);i++)
  {
    h=a[i+1];
    a[i]=h;
  }
  printf("The updated array after DELETED is : \n");
  for(i=0;i<(n-1);i++)
  {
    printf("%d ",a[i]);
  }     
  printf("\n");
  return 0;
}    