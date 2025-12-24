/* 
21. Count Frequency of Each Element
   Stores n integers in an array
   Uses a function to print the frequency of each element
*/

#include <stdio.h>

void frequency(int arr[], int n);

int main() {
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    frequency(arr, n);

    return 0;
}

void frequency(int arr[], int n) {
    int visited[n];

    for (int i = 0; i < n; i++)
        visited[i] = 0;

    for (int i = 0; i < n; i++) {
        if (visited[i] == 1)
            continue;

        int count = 1;

        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                visited[j] = 1;
            }
        }

        printf("Frequency of %d is %d\n", arr[i], count);
    }
}
