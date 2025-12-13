/* 10. Print the array in reverse without modifying */

#include <stdio.h>

int main() {
    int a[5], i;

    // Input array
    for(i = 0; i < 5; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    // Print array in reverse (without modifying)
    printf("Array in reverse order:\n");
    for(i = 4; i >= 0; i--) {
        printf("%d ", a[i]);
    }

    return 0;
}
