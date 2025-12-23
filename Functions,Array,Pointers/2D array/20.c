/* 20. Reverse an Array
   Reads n elements
   Uses a function to reverse the array
   Prints the reversed array using a loop
*/

#include <stdio.h>

void revarr(int arr[], int n);

int main() {
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];   // declare after reading n

    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    revarr(arr, n);   

    return 0;
}

void revarr(int arr[], int n) {
    printf("Reversed array: ");
    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
}
