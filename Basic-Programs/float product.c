/* 4. Product of Two Floating Numbers – Accept two float numbers and print the result.  */
#include<stdio.h>
int main()
{
    float a, b, product;
    printf("Enter two floating point numbers: ");
    scanf("%f %f", &a, &b);
    product = a * b;
    printf("Product of %.2f and %.2f is %.2f\n", a, b, product);
    return 0;
}