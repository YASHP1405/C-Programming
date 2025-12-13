/* 4. Temperature Conversion – Celsius to Fahrenheit and vice versa. */
#include <stdio.h>
int main() {
    int choice;
    float celsius, fahrenheit;

    printf("Choose conversion:\n1. Celsius to Fahrenheit\n2. Fahrenheit to Celsius\n");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter temperature in Celsius: ");
        scanf("%f", &celsius);
        fahrenheit = (celsius * 9/5) + 32;
        printf("Temperature in Fahrenheit: %.2f\n", fahrenheit);
    } else if (choice == 2) {
        printf("Enter temperature in Fahrenheit: ");
        scanf("%f", &fahrenheit);
        celsius = (fahrenheit - 32) * 5/9;
        printf("Temperature in Celsius: %.2f\n", celsius);
    } else {
        printf("Invalid choice!\n");
    }

    return 0;
}