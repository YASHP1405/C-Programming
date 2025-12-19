#include <stdio.h>

int main() {
    int a[2][2], i, j;
    int ce = 0, co = 0;

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("Enter element a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            if (a[i][j] % 2 == 0)
                ce++;
            else
                co++;
        }
    }

    printf("\nNumber of Even elements = %d", ce);
    printf("\nNumber of Odd elements  = %d", co);

    return 0;
}
