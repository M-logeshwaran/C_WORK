#include<stdio.h>

int main()
{
    int mark;
    printf("Enter the mark of the student : ");
    scanf("%d",&mark);
    if(mark>=90 && mark<=100)
    {
    printf("The garde is : A grade !\n");
    }
    else if(mark>=80 && mark<90)
    {
    printf("The garde is : B grade !\n");
    }
    else if(mark>=70 && mark<80)
    {
    printf("The grade is : C grade !\n");
    }
    else
    {
    printf("The grade is : D grade !\n");
    }
    return 0;
    
}
