#include<stdio.h>
#include<math.h>

int main()
{ 
  int b; 
  printf("Enter the length of ARRAY : ");
  scanf("%d",&b); 
  int a[b],i,b1,count=0;
  for(i=0 ; i<b ; i++)
  {
    b1=0;
    printf("Enter at %d index : ",i);
    scanf("%d",&a[i]);
    for(int j=2;j<a[i];j++)
    {
      if(a[i]%j==0)
      { 
        b1=1;
        break;
      }
    }  
    if(b1==0)
    {
      count++;
    }
  }
  printf("\nThe ARRAY contain [ %d ] count of PRIME !\n",count);
  printf("\nThe ARRAY contain [ %d ] count of COMPOSITE !\n",b-count);
  return 0;
    
}
