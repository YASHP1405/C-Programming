#include <stdio.h>

int balance = 1000;   // global balance

void checkBalance();
void deposit();
void withdraw();

int main() {
    int choice;

    do {
        printf("\n--- ATM MENU ---\n");
        printf("1. Check Balance\n");
        printf("2. Deposit\n");
        printf("3. Withdraw\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                checkBalance();
                break;
            case 2:
                deposit();
                break;
            case 3:
                withdraw();
                break;
            case 4:
                printf("Thank you for using ATM\n");
                break;
            default:
                printf("Invalid choice\n");
        }

    } while(choice != 4);

    return 0;
}

void checkBalance() {
    printf("Current Balance: %d\n", balance);
}

void deposit() {
    int amount;
    printf("Enter amount to deposit: ");
    scanf("%d", &amount);

    if(amount > 0) {
        balance += amount;
        printf("Amount deposited successfully\n");
    } else {
        printf("Invalid amount\n");
    }
}

void withdraw() {
    int amount;
    printf("Enter amount to withdraw: ");
    scanf("%d", &amount);

    if(amount > balance) {
        printf("Insufficient balance\n");
    } else if(amount <= 0) {
        printf("Invalid amount\n");
    } else {
        balance -= amount;
        printf("Please collect your cash\n");
    }
}
