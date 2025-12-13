/* 7. Total Marks & Percentage – Input marks of 5 subjects, find total and percentage.*/
#include <stdio.h>
int main() {
    float marks[5], total = 0.0, percentage;
    int i;

    printf("Enter marks of 5 subjects:\n");
    for(i = 0; i < 5; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%f", &marks[i]);
        total += marks[i];
    }

    percentage = (total / 500) * 100; // Assuming each subject is out of 100

    printf("Total Marks: %.2f\n", total);
    printf("Percentage: %.2f%%\n", percentage);

    return 0;
}