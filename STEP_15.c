#include<stdio.h>
#include<math.h>

int main()
{ 
  int a[50];
  int i=0,j=0,sum=0,std;
  printf("Enter the num of std : ");
  scanf("%d",&std);
  for(i;i<std;i++)
  {
     printf("Enter the height of std %d : ",i+1);
     scanf(" %d",&a[i]);
     sum=sum+a[i];
  }
  float avg=(float)sum/std;
  printf("Avg height is : %f",avg);
  
  return 0;  
}
