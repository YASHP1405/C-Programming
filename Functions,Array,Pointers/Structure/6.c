/* 6. What is the difference between structure and union? Explain with example. */
#include <stdio.h>
struct ExampleStruct {
    int a;
    float b;
};
union ExampleUnion {
    int a;
    float b;
};
int main() {
    struct ExampleStruct s;
    union ExampleUnion u;

    s.a = 10;
    s.b = 20.5;

    u.a = 10;
    // After this assignment, the value of u.b is undefined
    u.b = 20.5;

    printf("Structure: a = %d, b = %.2f\n", s.a, s.b);
    printf("Union: a = %d, b = %.2f\n", u.a, u.b); // u.a and u.b share the same memory

    return 0;
}

