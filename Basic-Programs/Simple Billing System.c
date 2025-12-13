/* 11. Simple Billing System – Input product price & quantity → Print total bill with tax. */
#include<stdio.h>
int main(){
    float price, quantity, tax_rate = 0.05, total, tax, final_amount;
    
    // Input price and quantity
    printf("Enter product price: ");
    scanf("%f", &price);
    printf("Enter quantity: ");
    scanf("%f", &quantity);
    
    // Calculate total, tax and final amount
    total = price * quantity;
    tax = total * tax_rate;
    final_amount = total + tax;
    
    // Print the bill
    printf("Total Amount: %.2f\n", total);
    printf("Tax (5%%): %.2f\n", tax);
    printf("Final Amount to be paid: %.2f\n", final_amount);
    
    return 0;
}