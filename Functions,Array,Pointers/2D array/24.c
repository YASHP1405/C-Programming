/*
23. Merge Two Arrays

        Write a program that:
        Reads two arrays
        Uses a function to merge them into a third array
        Prints the merged array
*/

#include<stdio.h>
#define MAX_SIZE 100
void mergeArrays(int arr1[], int size1, int arr2[], int size2, int mergedArr[]) {
    int i, j = 0;

    // Copy elements from first array
    for(i = 0; i < size1; i++) {
        mergedArr[j++] = arr1[i];
    }

    // Copy elements from second array
    for(i = 0; i < size2; i++) {
        mergedArr[j++] = arr2[i];
    }
}
int main() {
    int arr1[MAX_SIZE], arr2[MAX_SIZE], mergedArr[2 * MAX_SIZE];
    int size1, size2, i;

    // Read first array
    printf("Enter size of first array: ");
    scanf("%d", &size1);
    printf("Enter elements of first array:\n");
    for(i = 0; i < size1; i++) {
        scanf("%d", &arr1[i]);
    }

    // Read second array
    printf("Enter size of second array: ");
    scanf("%d", &size2);
    printf("Enter elements of second array:\n");
    for(i = 0; i < size2; i++) {
        scanf("%d", &arr2[i]);
    }

    // Merge arrays
    mergeArrays(arr1, size1, arr2, size2, mergedArr);

    // Print merged array
    printf("Merged array:\n");
    for(i = 0; i < size1 + size2; i++) {
        printf("%d ", mergedArr[i]);
    }
    printf("\n");

    return 0;
}
