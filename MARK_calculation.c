#include <stdio.h>

int main()
{
    int j,i,rollno,math,cs,phy,chem,eng;
    printf("enter the no of student : ");
    scanf("%d",&i);
    for(j=0;j<i;j++)
    {
       printf("\nEnter the student rollno : ");
       scanf("%d",&rollno);
       printf("Enter the student mark in ( MATH , CS , PHY , CHEM , ENG ) : ");
       scanf("%d %d %d %d %d",&math,&cs,&phy,&chem,&eng);
       int total=cs+math+phy+chem+eng;
       float percent=((float)total/500)*100;
       printf("the total mark is : %d\n",total);
       printf("the percent is : %f\n",percent);
    }
    return 0;
   
}