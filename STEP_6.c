#include<stdio.h>

int main()
{
    int year;
    printf("Enter the year to check LEAP YEAR : ");
    scanf("%d",&year);
    if(year%100==0 && year%400==0)
    {
      printf("The given year is leap year !\n");
    }
    else if(year%4==0)
    {
      printf("This is leap year !\n");
    }
    else
    {
      printf("This not leap year !\n");
    }
    return 0;
    
}
