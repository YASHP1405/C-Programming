/* 22. Rotate array to the left (1 position)*/
#include <stdio.h>
int main(){
    int arr[5], i, first;
    printf("Enter 5 elements of array: ");
    for(i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    first = arr[0];
    for(i=0;i<4;i++){
        arr[i] = arr[i+1];
    }
    arr[4] = first;
    printf("Array after left rotation: ");
    for(i=0;i<5;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}