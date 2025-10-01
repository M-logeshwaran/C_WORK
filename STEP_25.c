#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
  char a[100],temp;
  printf("ENter the STRING : ");
  fgets(a,100,stdin);
  for(int i=0;i<strlen(a)-1;i++)
  {
    for(int j=0;j<strlen(a)-1;j++)
    {
        if(a[i]<a[j] && i!=j)
        {
          temp=a[i];
          a[i]=a[j];
          a[j]=temp;
        }
    }
  }
  printf("\nSTRING sorted in Ascending : ");
  puts(a);
  for(int i=0;i<strlen(a)-1;i++)
  {
    for(int j=0;j<strlen(a)-1;j++)
    {
        if(a[i]>a[j] && i!=j)
        {
          temp=a[i];
          a[i]=a[j];
          a[j]=temp;
        }
    }
  }
  printf("\nSTRING sorted in Decending : ");
  puts(a);
  return 0;
}
