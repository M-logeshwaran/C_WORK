#include<stdio.h>
#include<math.h>

int main()
{ 
  int num;  
  printf("Enter the num : ");
  scanf("%d",&num);  
  int a[num],i,max,min,j;
  for(i=0;i<num;i++)
  {
     printf("Enter the index %d : ",i);
     scanf("%d",&a[i]);
  }
  min=a[0];
  max=a[0];   
  for(j=1;j<num;j++)
  {
      if(a[j]>max)
      {
        max=a[j];
      }
      if(a[j]<min)
      {
        min=a[j];
      }    
  }
  printf("The max : %d\n",max);
  printf("The min : %d",min);
  return 0;   
}
