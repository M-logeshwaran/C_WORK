#include<stdio.h>

int main()
{
    int num1,num2;
    printf("enter the [ num1 , num2 ] : ");
    scanf("%d%d",&num1,&num2);
    char op;
    printf("enter the operator( + , - , / , * ) : ");
    scanf(" %c",&op);
    if(op=='+')
    {
      int sum=num1+num2;
      printf("The sum is : %d",sum);
    }
    else if(op=='-')
    {
      int sub=num1-num2;
      printf("The sub is : %d",sub);
    }
    else if(op=='/')
    {
      float devide=(float)num1/num2;
      printf("The devide is : %.2f",devide);
    }
    else if(op=='*')
    {
      int mult=num1*num2;
      printf("The multiple is : %d",mult);
    }
    else
    {
      printf("invalid operator !");
    }
    return 0;
    
}
