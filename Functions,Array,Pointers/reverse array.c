
#include <stdio.h>

int main() {
    int a[5], b[5], i, j;

    for (i = 0; i < 5; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    for (i = 0; i < 5; i++) {
        b[j] = a[i];
        j--;
    }

    for (i = 0; i < 5; i++) {
        printf("Reversed element %d: %d\n", i + 1, b[i]);
    }

    return 0;
}
