/**/
#include<stdio.h>
int main(){
    int a[5],i,max;
    for(i = 0; i < 5; i++) {
        printf("Enter 5 elements:\n");
        scanf("%d", &a[i]);
    }
    max = a[0];
    for(i = 0; i < 5; i++) {
        if(a[i] < max) {
            max = a[i];
        }
    }
    printf("The minimum element is: %d\n", max);
    return 0;
}