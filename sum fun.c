#include<stdio.h>
int add();
int main(){
    add();
    return 0;
}
int add(){
    int a, b, sum;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    sum = a + b;
    printf("Sum: %d\n", sum);
}