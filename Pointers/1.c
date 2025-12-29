#include <stdio.h>

int main() {
    int x = 10;      // integer variable
    int *p;          // pointer declaration

    p = &x;          // pointer stores address of x

    printf("Value of x: %d\n", x);
    printf("Address of x: %p\n", (void*)&x);

    printf("Value using pointer (*p): %d\n", *p);
    printf("Address stored in pointer (p): %p\n", (void*)p);

    return 0;
}
