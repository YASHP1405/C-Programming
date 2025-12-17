/* 19. Merge two arrays into a third array */
#include <stdio.h>
int main(){
    int a[5], b[5], c[10];
    int i;
    for (i = 0; i < 5; i++) {
        printf("Enter element %d of first array: ", i + 1);
        scanf("%d", &a[i]);
    }
    for (i = 0; i < 5; i++) {
        printf("Enter element %d of second array: ", i + 1);
        scanf("%d", &b[i]);
    }
    for (i = 0; i < 5; i++) {
        c[i] = a[i];
    }
    for (i = 0; i < 5; i++) {
        c[i + 5] = b[i];
    }
    printf("Merged array is: ");
    for (i = 0; i < 10; i++) {
        printf("%d ", c[i]);
    }
    return 0;
}