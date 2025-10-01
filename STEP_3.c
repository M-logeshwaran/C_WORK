#include<stdio.h>

int main()
{ 
   int a,b,c;
   printf("Enter the three number [ A , B , C ] : ");
   scanf("%d %d %d",&a,&b,&c);
   if(a>b && a>c)
   { 
      printf("The largest num is A : %d\n",a);
   }
   else if(b>c)
   {
      printf("The largest num is B : %d\n",b);
   }
   else if(c>b)
   {
      printf("The largest num is C : %d\n",c);
   }
   else
   {
      printf("The given num are same !\n");
   }
   return 0;
    
}
