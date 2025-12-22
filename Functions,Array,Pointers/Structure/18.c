/* 18. Count Even and Odd Numbers
        Write a program that:
        Reads n elements into an array
        Uses a function to count how many numbers are even and odd
*/


 
#include <stdio.h>

// Function to count even and odd numbers
void countEvenOdd(int a[], int n) {
    int even = 0, odd = 0;

    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    printf("Even numbers: %d\n", even);
    printf("Odd numbers: %d\n", odd);
}

int main() {
    int a[8];

    for (int i = 0; i < 8; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    countEvenOdd(a, 8);

    return 0;
}

 