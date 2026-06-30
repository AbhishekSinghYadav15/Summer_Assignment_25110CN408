#include <stdio.h>
#include <string.h>

struct Book {
    int id;
    char title[50];
    int available;
};

int main() {
    struct Book books[50];
    int count = 0, choice;

    do {
        printf("\n=== Mini Library System ===\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Issue Book\n");
        printf("4. Return Book\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter Book ID: ");
                scanf("%d", &books[count].id);
                printf("Enter Book Title: ");
                scanf(" %[^\n]", books[count].title);
                books[count].available = 1;
                count++;
                printf("Book added!\n");
                break;

            case 2:
                printf("\n%-5s %-30s %-10s\n", "ID", "Title", "Status");
                for (int i = 0; i < count; i++)
                    printf("%-5d %-30s %-10s\n", books[i].id, books[i].title,
                           books[i].available ? "Available" : "Issued");
                break;

            case 3: {
                int id;
                printf("Enter Book ID to issue: ");
                scanf("%d", &id);
                for (int i = 0; i < count; i++) {
                    if (books[i].id == id) {
                        if (books[i].available) {
                            books[i].available = 0;
                            printf("Book issued!\n");
                        } else {
                            printf("Book already issued!\n");
                        }
                    }
                }
                break;
            }

            case 4: {
                int id;
                printf("Enter Book ID to return: ");
                scanf("%d", &id);
                for (int i = 0; i < count; i++) {
                    if (books[i].id == id) {
                        books[i].available = 1;
                        printf("Book returned!\n");
                    }
                }
                break;
            }

            case 5:
                printf("Exiting Library System!\n");
                break;
        }

    } while (choice != 5);

    return 0;
}