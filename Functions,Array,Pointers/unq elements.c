/*            16. Print unique elements in an array */
/* 16. Print unique elements in an array */
#include <stdio.h>

int main() {
    int a[10], i, j, count;

    // Input array elements
    for (i = 0; i < 10; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    printf("\nUnique elements in the array are:\n");

    // Logic to find unique elements
    for (i = 0; i < 10; i++) {
        count = 0;
        for (j = 0; j < 10; j++) {
            if (a[i] == a[j]) {
                count++;
            }
        }
        if (count == 1) {
            printf("%d ", a[i]);
        }
    }

    return 0;
}
