#include<stdio.h>

int main()
{
    int num1,num2;
    printf("enter the [ num1 , num2 ] : ");
    scanf("%d%d",&num1,&num2);
    char op;
    printf("enter the operator( + , - , / , * ) : ");
    scanf(" %c",&op);
    switch(op)
    {
        case '+':
          printf("The sum : %d",num1+num2);
          break;
        case '-':
          printf("The sub : %d",num1-num2);
          break;
        case '*':
          printf("The mult : %d",num1*num2);
          break;
        case '/':
          printf("The devide : %.2f",(float)num1/num2);
          break;
        default:
          printf("invalid operator !\n");
     }
    return 0;
    
    
}