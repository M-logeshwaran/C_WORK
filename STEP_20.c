#include<stdio.h>
#include<math.h>

int main()
{
    int arr[100],n,s,c=0;
    printf("Enter the length : ");
    scanf("%d",&n);
    printf("Enter elements in ASC ORDER !\n");
    for(int i=0;i<n;i++)
    {
       printf("Enter at %d index :",i);
       scanf("%d",&arr[i]);
    }
    printf("Enter the num to search:");
    scanf("%d",&s);
    int low=0;
    int max=n-1;
    int mid=(low+max)/2;
    while(mid!=0)
    {
        mid=(low+max)/2;
        if(arr[mid]==s)
        {
             c=1;
             printf("\nThe search element is found at [ %d ] index",mid);
             break;
        }
        else if(arr[mid]>s)
        {
             max=mid-1;
        }
        else
        {
             low=mid+1;
        }
    }
    if(c==0)
    {
       printf("\nElement not found!");
    }
    return 0;
}
