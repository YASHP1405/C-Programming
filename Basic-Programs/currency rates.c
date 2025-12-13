/*9. Currency Conversion – Convert the given amount in INR to USD/EUR. */
#include<stdio.h>
int main(){
    float inr, usd, eur;
    printf("Enter amount in INR: ");
    scanf("%f", &inr);
    usd = inr / 82.0; // Assuming 1 USD = 82 INR
    eur = inr / 90.0; // Assuming 1 EUR = 90 INR
    printf("Amount in USD: %.2f\n", usd);
    printf("Amount in EUR: %.2f\n", eur);
    return 0;
}