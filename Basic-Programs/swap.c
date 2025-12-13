/* 1. Swap Two Numbers (without third variable) – Use arithmetic operators.*/
#include <stdio.h>
int main(){
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    a=a+b;
    b=a-b;  
    a=a-b;
    printf("After swapping: a=%d, b=%d\n",a,b);
    return 0;
}