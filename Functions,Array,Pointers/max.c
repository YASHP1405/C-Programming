/*4. Find the maximum element */
#include <stdio.h>

int main() {
    int a[5], i, max;

    printf("Enter 5 elements:\n");
    for(i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
    }

    for(i = 0; i < 5; i++) {
        if(i == 0) {
            max = a[i];        
        }
        else if(a[i] > max) {
            max = a[i];        
        }
    }

    printf("Maximum element is: %d\n", max);

    return 0;
}
