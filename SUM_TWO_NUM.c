#include<stdio.h>

int main()
{
    int a,b;
    printf("Enter the two Number [ num1 , num2 ] : ");
    scanf("%d %d",&a,&b);
    int sum;
    sum=a+b;
    printf("\nSUM IS :");
    printf("\n%d + %d = %d ",a,b,sum);
    return 0;
}