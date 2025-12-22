/* 1️⃣ Sum of Array Using Function

            Question:
            Write a C program that:
            Takes 5 integers in an array using a loop
            Passes the array to a function
            The function returns the sum of all elements */

#include <stdio.h>

int sumarr(int arr[], int n) {
    int sum = 0;
    for (int j = 0; j < n; j++) {
        sum = sum + arr[j];
    }
    return sum;
}

int main() {
    int a[5];

    for (int i = 0; i < 5; i++) {
        printf("Enter the value of a[%d]: ", i);
        scanf("%d", &a[i]);
    }

    int result = sumarr(a, 5);

    printf("The sum of all elements in the array is: %d", result);

    return 0;
}
