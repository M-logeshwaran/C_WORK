#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main()
{
   int a;
   printf("Enter the NUMBER of ELEMENT : ");
   scanf("%d",&a);
   int arr[a];
   for(int i=0;i<a;i++){
        printf("Enter at [ %d ] INDEX : ");
        scanf("%d",&arr[i]);
   }


   printf("\nBEFORE INSERTION SORTED :\n");
   for(int i=0;i<a;i++){
        printf("%d ",arr[i]);
   }
   printf("\n");
   

   /*------- INSERTION SORT -------*/
   
   for (int i = 1; i < a; i++) {
       int num=arr[i];
       int j=i-1;
       while(j>=0 && arr[j]>num){
            arr[j+1]=arr[j];
            j--;
       }
       arr[j+1]=num;
   }         
   

   printf("\n\nAFTER INSERTION SORTED :\n");
   for(int i=0;i<a;i++){
        printf("%d ",arr[i]);
   }
   printf("\n");
   return 0;
}