#include<stdio.h>

int sum();   

int main() {
    sum();
    return 0;
}

int sum() {
    int a, b, c;
    printf("Enter two numbers :- ");
    scanf("%d %d", &a, &b);

    c = a + b;

    printf("The sum of two numbers :- %d\n", c);

    return 0;
}
