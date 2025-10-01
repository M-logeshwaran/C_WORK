#include<stdio.h>
#include<math.h>

int main()
{ 
  int b; 
  printf("Enter the length of ARRAY : ");
  scanf("%d",&b); 
  int a[b],i,count=0,copy=0,pal;
  for(i=0;i<b;i++)
  {
     pal=0;
     printf("Enter at %d index : ",i);
     scanf("%d",&a[i]);
     copy = a[i];
     while(copy!=0){
         pal=pal*10;
         pal=pal+(copy%10); 
         copy = copy/10;
     }
     if(pal == a[i]){
         count++;
     }
     else{
         continue;
     }
  }
  printf("\nThe ARRAY contain [ %d ] number of palindrome !\n",count);
  return 0;
}