#include <stdio.h>
#include <string.h>

struct Account {
    int accNo;
    char name[50];
    float balance;
};

int main() {
    struct Account acc;
    int choice;
    float amount;

    printf("=== Create Bank Account ===\n");
    printf("Enter Account Number: ");
    scanf("%d", &acc.accNo);
    printf("Enter Account Holder Name: ");
    scanf("%s", acc.name);
    printf("Enter Initial Deposit: ");
    scanf("%f", &acc.balance);

    do {
        printf("\n=== Bank Menu ===\n");
        printf("1. Check Balance\n");
        printf("2. Deposit\n");
        printf("3. Withdraw\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Account Holder: %s\n", acc.name);
                printf("Balance: Rs. %.2f\n", acc.balance);
                break;
            case 2:
                printf("Enter amount to deposit: ");
                scanf("%f", &amount);
                if (amount > 0) {
                    acc.balance += amount;
                    printf("Deposited successfully! New Balance = Rs. %.2f\n", acc.balance);
                } else {
                    printf("Invalid amount!\n");
                }
                break;
            case 3:
                printf("Enter amount to withdraw: ");
                scanf("%f", &amount);
                if (amount > acc.balance)
                    printf("Insufficient balance!\n");
                else if (amount <= 0)
                    printf("Invalid amount!\n");
                else {
                    acc.balance -= amount;
                    printf("Withdrawal successful! Remaining Balance = Rs. %.2f\n", acc.balance);
                }
                break;
            case 4:
                printf("Thank you for banking with us!\n");
                break;
            default:
                printf("Invalid choice!\n");
        }
    } while (choice != 4);

    return 0;
}