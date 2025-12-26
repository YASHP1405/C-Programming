#include <stdio.h>

void circle();
void rectangle();
void triangle();

int main() {
    int choice;

    printf("\n--- AREA MENU ---\n");
    printf("1. Area of Circle\n");
    printf("2. Area of Rectangle\n");
    printf("3. Area of Triangle\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            circle();
            break;
        case 2:
            rectangle();
            break;
        case 3:
            triangle();
            break;
        default:
            printf("Invalid choice");
    }

    return 0;
}

void circle() {
    float r;
    printf("Enter radius: ");
    scanf("%f", &r);
    printf("Area of Circle = %.2f\n", 3.14 * r * r);
}

void rectangle() {
    float l, b;
    printf("Enter length and breadth: ");
    scanf("%f %f", &l, &b);
    printf("Area of Rectangle = %.2f\n", l * b);
}

void triangle() {
    float b, h;
    printf("Enter base and height: ");
    scanf("%f %f", &b, &h);
    printf("Area of Triangle = %.2f\n", 0.5 * b * h);
}
