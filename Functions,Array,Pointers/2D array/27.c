/*1️⃣ Search Without Loop Keyword

Search an element in an array without using for or while.
✔ Hint: recursion
*/
#include <stdio.h>
int main(){
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 30;

    int search(int arr[], int n, int target, int index) {
        if (index >= n) return -1; // Base case: not found
        if (arr[index] == target) return index; // Element found
        return search(arr, n, target, index + 1); // Recursive call
    }

    int result = search(arr, n, target, 0);
    if (result != -1)
        printf("Element found at index: %d\n", result);
    else
        printf("Element not found\n");

    return 0;
}
