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

    /*<------ SELECTION SORT ------>*/ 

    int pos;
    for(int j=0;j<a-1;j++){
        pos = j+1;
        for(int i=(j+1); i<a; i++){
            if(arr[pos]>arr[i]){
                pos = i;
            }
        }
        if(arr[j]>arr[pos]){
            int temp = arr[pos];
            arr[pos] = arr[j];
            arr[j] = temp;
        }
    }

    printf("\n\nAFTER BUBBLE SORTED :\n");
    for (int i=0;i<a;i++){
        printf("%d ",arr[i]);
    }  
    printf("/n");
    return 0; 

}