/* 7. Count positive and negative numbers */
#include <stdio.h>
int main(){
    int a[10],i,positive=0,negative=0;
    printf("Enter the elements of the array: ");
    for(i=0;i<10;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++){
        if(a[i]>=0)
            positive++;
        else
            negative++;
    }
    printf("Number of positive elements: %d\n",positive);
    printf("Number of negative elements: %d\n",negative);
    return 0;
}