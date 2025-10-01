#include<stdio.h>
#include<math.h>

int main()
{ 
  int a,b,c,d,col;
  printf("Enter the number of COLUMN : ");
  scanf("%d",&col);
  printf("Enter the range [ num1 , num2 ] : ");
  scanf("%d %d",&c,&d);
  a=c;
  b=(a-1)+col;
  while(1)
  {
    for(int j=1; j<=10; j++)
    {
      for(int i=a; i<=b; i++)
      {
        if(i>d){
          break;
        }
        else{
          printf("%d X %d = %d\t",i,j,j*i);
        }  
      }
      printf("\n"); 
    }
    printf("\n");
    a=b+1;
    b=b+col;
    if(a>d){
      break;
    }
  } 
  return 0;    
}
