/* 2D array example */
#include <stdio.h>

int main() {
    int a[3][2];
    int i, j;


    for (i = 0; i < 3; i++) {
        for (j = 0; j < 2; j++) {
            printf("Enter elements of 3x2 matrix:\n");
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nMatrix is:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
