#include <stdio.h>

int main() {
    int a[3][2];
    int i, j;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 2; j++) {
            printf("Enter element ");
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < 3; i++) {
        int sumr = 0;
        for (j = 0; j < 2; j++) {
            sumr += a[i];
        }
        printf("Row %d sum = %d\n", i, sumr);
    }

    for (j = 0; j < 2; j++) {
        int sumc = 0;
        for (i = 0; i < 3; i++) {
            sumc += a[j];
        }
        printf("Column %d sum = %d\n", j, sumc);
    }

    return 0;
}
