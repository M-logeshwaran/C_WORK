#include<stdio.h>
#include<math.h>

int main()
{ 
  int a,i,fact=1;
  printf("Enter the num to calculate FACTORIAL: ");
  scanf("%d",&a);
  for(i=a;i>0;i--)
    {
      if(i>0)
      {
        fact=fact*i;
      }
         
    }
  (a==0) ? printf("The factorial is : 0\n") : printf("The factorial is : %d\n",fact);  
  return 0;
    
}
