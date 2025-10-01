#include<stdio.h>
#include<math.h>

int main()
{ 
   int original,a,b,ex=0,c=0;
   printf("Enter the Number to check Armstrong : ");
   scanf("%d",&a);
   b=a+0;
   original=a+0;
   while(a!=0)
   {
       c++;
       a=a/10;    
   }
   while(b!=0){
       ex = ex + pow((b%10),c);
       b=b/10;
   }
   if(ex==original)
   {
       printf("The Number %d is armstrong !\n",original);
   }
   else
   {
      printf("The Number %d is NOT armstrong !\n",original);
   }   
   return 0;
    
}
