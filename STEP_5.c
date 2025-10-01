#include<stdio.h>
#include<math.h>

int main()
{ 
   int a,b,c;
   printf("Enter the three angle (A1 , A2 , A3) to check it can form triangle : ");
   scanf("%d %d %d",&a,&b,&c);
   if(a+b+c==180)
   {
      printf("The angles can make triangle !\n\n");
      int a1,b1,c1;
      printf("enter the three sides of triangle (S1 , S2 , S3) : ");
      scanf("%d %d %d",&a1,&b1,&c1);
      float s=(a1+b1+c1)/2.0;
      float area=sqrt(s*(s-a1)*(s-b1)*(s-c1));
      printf("the area is : %f",area);
   }
   else
   { 
      printf("It cannot make triangle !\n");
   }
   return 0;
    
}
