/*25. Pass Array to Function and Modify It

     Write a program that:
        Stores numbers in an array
        Uses a function to square each element of the array
        Prints the modified array
    */

#include<stdio.h>
int modifyArray(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        arr[i] = arr[i] * arr[i];
    }
}
int main() {
    int numbers[] = {1, 2, 3, 4, 5};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    modifyArray(numbers, size);

    printf("Modified array: ");
    for(int i = 0; i < size; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}
