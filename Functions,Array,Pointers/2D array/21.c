/* 
21. Search an Element
   Takes an array of n elements
   Uses a function to search for a given element
   Returns its position if found, otherwise -1
*/

#include <stdio.h>

int elementsrch(int arr[], int n, int key);

int main() {
    int n, key;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    int pos = elementsrch(arr, n, key);

    if (pos != -1) {
        printf("Element found at position %d\n", pos);
    } else {
        printf("Element not found\n");
    }

    return 0;
}

int elementsrch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i + 1;   // position (1-based)
        }
    }
    return -1;  // not found
}
