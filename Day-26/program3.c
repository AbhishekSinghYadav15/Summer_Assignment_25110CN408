#include <stdio.h>

int main() {
    int pin, enteredPin;
    float balance = 10000.00;
    int choice;
    float amount;

    pin = 1234;

    printf("=== Welcome to ATM ===\n");
    printf("Enter your PIN: ");
    scanf("%d", &enteredPin);

    if (enteredPin != pin) {
        printf("Invalid PIN! Access Denied.\n");
        return 0;
    }

    printf("PIN Accepted!\n");

    do {
        printf("\n--- ATM Menu ---\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Current Balance = Rs. %.2f\n", balance);
                break;

            case 2:
                printf("Enter amount to deposit: ");
                scanf("%f", &amount);
                if (amount <= 0)
                    printf("Invalid amount!\n");
                else {
                    balance += amount;
                    printf("Rs. %.2f deposited successfully.\n", amount);
                    printf("New Balance = Rs. %.2f\n", balance);
                }
                break;

            case 3:
                printf("Enter amount to withdraw: ");
                scanf("%f", &amount);
                if (amount <= 0)
                    printf("Invalid amount!\n");
                else if (amount > balance)
                    printf("Insufficient balance!\n");
                else {
                    balance -= amount;
                    printf("Rs. %.2f withdrawn successfully.\n", amount);
                    printf("Remaining Balance = Rs. %.2f\n", balance);
                }
                break;

            case 4:
                printf("Thank you for using ATM. Goodbye!\n");
                break;

            default:
                printf("Invalid choice! Try again.\n");
        }

    } while (choice != 4);

    return 0;
}