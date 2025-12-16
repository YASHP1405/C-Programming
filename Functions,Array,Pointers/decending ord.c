/* 18. Sort array in descending order*/
#include <stdio.h>

int main() {
    int i, j, a[5], temp;

    // Input array elements
    for (i = 0; i < 5; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    // Sorting logic (Descending Order)
    for (i = 0; i < 4; i++) {
        for (j = i + 1; j < 5; j++) {
            if (a[i] < a[j]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    // Output sorted array
    printf("\nArray in descending order:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
