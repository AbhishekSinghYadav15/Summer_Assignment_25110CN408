#include <stdio.h>

int main() {
    char name[50];
    int age;
    char hasID;

    printf("=== Voting Eligibility System ===\n");
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Do you have a valid ID? (y/n): ");
    scanf(" %c", &hasID);

    printf("\n--- Result for %s ---\n", name);

    if (age < 18) {
        printf("Sorry, you are NOT eligible to vote.\n");
        printf("You need to be at least 18 years old.\n");
    } else if (hasID != 'y' && hasID != 'Y') {
        printf("You are old enough but do NOT have a valid ID.\n");
        printf("Please get a valid ID to vote.\n");
    } else {
        printf("Congratulations! You ARE eligible to vote.\n");
    }

    return 0;
}