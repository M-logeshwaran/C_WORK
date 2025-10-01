#include<stdio.h>

int main()
{
    int a,b,i,sum1=0,sum2=0,count=0;
    printf("Enter the range : ");
    scanf("%d %d",&a,&b);
    for(i=a;i<=b;i++)
    { 
          if(i%2==0)
          {
            sum1=sum1+i;
            printf("%d. (EVEN)\n",i);
            count=count+1;
          }
          else{
            printf("%d. (ODD)\n",i);
            sum2=sum2+i;
          }
    }
    printf("\nThe count of EVEN num is : %d",count);
    printf("\nThe count of ODD num is : %d",(b-a)-count);
    printf("\nThe sum of EVEN number in the given range is : %d",sum1);
    printf("\nThe sum of ODD number in the given range is : %d",sum2);
    return 0;
    
}
