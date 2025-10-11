#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int a;
    printf("Enter the NUMBER of ELEMENT : ");
    scanf("%d",&a);
    int arr[a];
    for (int i=0;i<a;i++){
        printf("Enter at [ %d ] INDEX : ",i);
        scanf("%d",&arr[i]);
    }

    printf("\nBEFORE BUBBLE SORT :\n");
    for (int i=0;i<a;i++){
        printf("%d ",arr[i]);
    }  

    /*<------ BUBBBLE SORT ------>*/ 

    int b;
    while(1){
        b = 0;
        for(int i=0;i<a-1;i++){
            if(arr[i]>arr[i+1]){
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
                b=1;
            }
        }
        if(b==0){
            break;
        }
    }

    printf("\n\nAFTER BUBBLE SORTED :\n");
    for (int i=0;i<a;i++){
        printf("%d ",arr[i]);
    }  
    printf("/n");
    return 0; 

}