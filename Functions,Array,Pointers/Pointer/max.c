#include <stdio.h>

int main() {
    int a = 15, b = 30;
    int *p1 = &a, *p2 = &b;

    if (*p1 > *p2)
        printf("Max = %d", *p1);
    else
        printf("Max = %d", *p2);

    return 0;
}
