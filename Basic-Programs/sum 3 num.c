/* 6. Sum of Three Numbers – Accept three integers and display the total and average. */
#include <stdio.h>
int main() {
    int num1, num2, num3, sum;
    float average;

    // Input three integers
    printf("Enter three integers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Calculate sum and average
    sum = num1 + num2 + num3;
    average = sum / 3.0;

    // Display results
    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n", average);

    return 0;
}