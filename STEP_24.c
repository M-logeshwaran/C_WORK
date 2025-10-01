#include<stdio.h>

int main()
{
   int a;
   printf("Enter the length of ARRAY : ");
   scanf("%d",&a);
   int arr[a];
   for(int i=0;i<a;i++)
   {
      printf("Enter at %d : ",a);
      scanf("%d[^\n] ",&arr[i]);
   }
   int count=0,max=0;
   for(int i=0;i<a;i++)
   {
      if(arr[i]%2==0)
      {
         count=count+1;
      }
      else
      {
         if(max<count)
         {
            max=count;
         }   
         count=0;
      }
   }
   if(max>count)
   {
      printf("\nThe MAX number of continous EVEN number : %d\n",max);
   }   
   else
   {
      printf("\nThe MAX number of continous EVEN number : %d\n",count);
   }    
   return 0;
    
}
