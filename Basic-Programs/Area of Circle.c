#include<stdio.h>

int main() {
    float area, radius;
    float pi = 3.14;

    printf("Enter radius of circle: ");
    scanf("%f", &radius);

    area = pi * radius * radius;

    printf("Area of Circle: %.2f\n", area);
    return 0;
}
