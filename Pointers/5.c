#include <stdio.h>

int main() {
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    int *p = arr;   // pointer to array

    printf("Enter elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", p + i);
    }

    int max = *p;   // initialize max with first element

    for (int i = 1; i < n; i++) {
        if (*(p + i) > max) {
            max = *(p + i);
        }
    }

    printf("Maximum element = %d\n", max);

    return 0;
}
