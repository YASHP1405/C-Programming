/* 12. Find the number of occurrences of a given number */
#include <stdio.h>

int main() {
    int a[10], n, i, key, count = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input array
    for(i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    printf("Enter number to find occurrences: ");
    scanf("%d", &key);

    // Count occurrences
    for(i = 0; i < n; i++) {
        if(a[i] == key) {
            count++;
        }
    }

    if(count > 0) {
        printf("Number %d occurs %d time(s) in the array\n", key, count);
    } else {
        printf("Number %d not found in the array\n", key);
    }

    return 0;
}

