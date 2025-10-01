#include<stdio.h>

int main()
{
    int num1;
    printf("Enter the number to check ( +ve , -ve , ZERO ) : ");
    scanf("%d",&num1);
    if(num1>0)
    {
       printf("The number [ %d ] is +ve:\n",num1);
    }
    else if(num1<0)
    {
       printf("The number [ %d ] is -ve:\n",num1);
    }
    else
    {
       printf("The number is zero so +ve\n",num1);
    }
    return 0;
    
}