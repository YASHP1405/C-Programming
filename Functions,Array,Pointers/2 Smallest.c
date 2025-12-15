/* 14. Find the second smallest number*/
#include <stdio.h>
int main() {
    int n, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int first, second;
    first = second = 2147483647; // Initialize to maximum integer value
    
    for(i = 0; i < n; i++) {
        if(arr[i] < first) {
            second = first;
            first = arr[i];
        } else if(arr[i] < second && arr[i] != first) {
            second = arr[i];
        }
    }
    
    if(second == 2147483647) {
        printf("There is no second smallest element.\n");
    } else {
        printf("The second smallest element is: %d\n", second);
    }
    
    return 0;
}