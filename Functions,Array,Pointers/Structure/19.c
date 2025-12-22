/* 19. Find Maximum and Minimum
        Write a program that:
        Stores 10 numbers in an array
        Uses a function to find the maximum and minimum values
 */
#include <stdio.h>

// Function to find max and min
void findMaxMin(int a[], int n) {
    int max = a[0];
    int min = a[0];

    for (int i = 1; i < n; i++) {
        if (a[i] > max)
            max = a[i];
        if (a[i] < min)
            min = a[i];
    }

    printf("Maximum value: %d\n", max);
    printf("Minimum value: %d\n", min);
}

int main() {
    int a[10];

    for (int i = 0; i < 10; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    findMaxMin(a, 10);

    return 0;
}
