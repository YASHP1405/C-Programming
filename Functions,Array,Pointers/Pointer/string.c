#include <stdio.h>

int main() {
    char str[] = "Pointer";
    char *p = str;
    int count = 0;

    while (*p != '\0') {
        count++;
        p++;
    }

    printf("Length = %d", count);
    return 0;
}
