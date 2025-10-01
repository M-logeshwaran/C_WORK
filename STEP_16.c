#include<stdio.h>
#include<math.h>

int main()
{ 
  int a[50],num,i,b,j,k,c,h,d;
  printf("Enter the length of ARRAY : ");
  scanf("%d",&num);
  for(k=0;k<num;k++)
  {
     printf("Enter at index %d : ",k);
     scanf("%d",&a[k]);
  }   
  for (i=0;i<num;i++)
  {
       b=0;
       for(j=0;j<num;j++)
       { 
           if(a[i]<a[j])
           {
               b=b+1;
               break;
           }   
       }
       if(b==0)
       {
          printf("\nThe largest num : %d \n",a[i]);
          break;
       }
  }     
  for(c=0;c<num;c++)
  {
       d=0;
       for(h=0;h<num;h++)
       {
           if(a[c]>a[h])
           {
                   d=d+1;
                   break;
           }
       }
       if(d==0)
       {
           printf("The smallest num : %d \n",a[c]);
           break;
       }
  }          
  
    return 0;
    
}
