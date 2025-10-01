#include<stdio.h>
#include<math.h>

int main()
{ 
  int a,i,j,b,count=0,b1=0;
  printf("Enter the num RANGE [ a , b ] : ");
  scanf("%d %d",&a,&b);
  for(j=a;j<=b;j++)
  {
      b1=0;
      for(i=2;i<j;i++)
     {
        if(j%i == 0)
        { 
          b1=1;
          break;
        }
      }
      if(b1==1)
      {
        printf("%d. (COMPOSITE)\n",j);
        count=count+1;
      }
      else{
        printf("%d. (PRIME)\n",j);
      }  
  }
  printf("\nThe no of COMPOSITE num from [ %d to %d ] is : %d",a,b,count);
  printf("\nThe no of PRIME num from [ %d to %d ] is : %d\n",a,b,(b-a)-count);
  return 0;
    
}
