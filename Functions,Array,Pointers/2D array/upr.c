#include <stdio.h>

int main() {
    int a[10][10];
    int i, j, n;

    printf("Enter size of matrix (n x n): ");
    scanf("%d", &n);

    printf("Enter matrix elements:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Lower Triangular Matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (i >= j)
                printf("%d ", a[i][j]);
            else
                printf("0 ");
        }
        printf("\n");
    }

    return 0;
}
