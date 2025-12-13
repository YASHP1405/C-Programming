/* 3. Compound Interest Calculator – Use formula A = P(1 + r/n)^(nt).*/
#include <stdio.h>
#include <math.h>

int main() {
    float P, r, t, A;
    int n;

    printf("Enter Principal amount: ");
    scanf("%f", &P);

    printf("Enter annual rate of interest (in %%): ");
    scanf("%f", &r);

    printf("Enter time (in years): ");
    scanf("%f", &t);

    printf("Enter number of times interest compounded per year: ");
    scanf("%d", &n);

    r = r / 100;   // Convert percentage to decimal

    A = P * pow((1 + r / n), n * t);

    printf("Final Amount = %.2f\n", A);
    printf("Compound Interest = %.2f\n", A - P);

    return 0;
}
