#include <stdio.h>
#include <string.h>

struct Contact {
    char name[50];
    char phone[15];
};

int main() {
    struct Contact contacts[100];
    int count = 0, choice;

    do {
        printf("\n=== Contact Management System ===\n");
        printf("1. Add Contact\n");
        printf("2. Display All Contacts\n");
        printf("3. Search Contact\n");
        printf("4. Delete Contact\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Enter Name: ");
            scanf("%s", contacts[count].name);
            printf("Enter Phone Number: ");
            scanf("%s", contacts[count].phone);
            count++;
            printf("Contact added successfully!\n");
        } else if (choice == 2) {
            printf("\n%-20s %-15s\n", "Name", "Phone");
            for (int i = 0; i < count; i++)
                printf("%-20s %-15s\n", contacts[i].name, contacts[i].phone);
        } else if (choice == 3) {
            char searchName[50];
            int found = 0;
            printf("Enter name to search: ");
            scanf("%s", searchName);
            for (int i = 0; i < count; i++) {
                if (strcmp(contacts[i].name, searchName) == 0) {
                    printf("Found: %s - %s\n", contacts[i].name, contacts[i].phone);
                    found = 1;
                }
            }
            if (!found) printf("Contact not found!\n");
        } else if (choice == 4) {
            char delName[50];
            int found = 0;
            printf("Enter name to delete: ");
            scanf("%s", delName);
            for (int i = 0; i < count; i++) {
                if (strcmp(contacts[i].name, delName) == 0) {
                    for (int j = i; j < count - 1; j++)
                        contacts[j] = contacts[j + 1];
                    count--;
                    found = 1;
                    printf("Contact deleted successfully!\n");
                    break;
                }
            }
            if (!found) printf("Contact not found!\n");
        }

    } while (choice != 5);

    printf("Exiting Contact Management System!\n");
    return 0;
}