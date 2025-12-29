#include <stdio.h>

int main() {
    int x = 10;      // variable
    int *p = &x;     // pointer stores address of x

    printf("Before modification:\n");
    printf("x = %d\n", x);

    *p = 25;         // modifying value using pointer

    printf("\nAfter modification:\n");
    printf("x = %d\n", x);

    return 0;
}
