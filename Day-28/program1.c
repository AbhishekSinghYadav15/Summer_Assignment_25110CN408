#include <stdio.h>
#include <string.h>

struct Book {
    int id;
    char title[50];
    char author[50];
    int isIssued; // 0 = available, 1 = issued
};

int main() {
    int n, choice;
    printf("Enter number of books: ");
    scanf("%d", &n);

    struct Book books[n];

    for (int i = 0; i < n; i++) {
        printf("\nEnter details for book %d:\n", i + 1);
        printf("Book ID: ");
        scanf("%d", &books[i].id);
        printf("Title: ");
        scanf(" %[^\n]", books[i].title);
        printf("Author: ");
        scanf(" %[^\n]", books[i].author);
        books[i].isIssued = 0;
    }

    do {
        printf("\n=== Library Menu ===\n");
        printf("1. Display All Books\n");
        printf("2. Issue a Book\n");
        printf("3. Return a Book\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("\n%-5s %-25s %-20s %-10s\n", "ID", "Title", "Author", "Status");
            for (int i = 0; i < n; i++) {
                printf("%-5d %-25s %-20s %-10s\n",
                       books[i].id, books[i].title, books[i].author,
                       books[i].isIssued ? "Issued" : "Available");
            }
        } else if (choice == 2) {
            int id;
            printf("Enter Book ID to issue: ");
            scanf("%d", &id);
            int found = 0;
            for (int i = 0; i < n; i++) {
                if (books[i].id == id) {
                    found = 1;
                    if (books[i].isIssued)
                        printf("Book already issued!\n");
                    else {
                        books[i].isIssued = 1;
                        printf("Book issued successfully!\n");
                    }
                }
            }
            if (!found) printf("Book ID not found!\n");
        } else if (choice == 3) {
            int id;
            printf("Enter Book ID to return: ");
            scanf("%d", &id);
            int found = 0;
            for (int i = 0; i < n; i++) {
                if (books[i].id == id) {
                    found = 1;
                    if (!books[i].isIssued)
                        printf("Book was not issued!\n");
                    else {
                        books[i].isIssued = 0;
                        printf("Book returned successfully!\n");
                    }
                }
            }
            if (!found) printf("Book ID not found!\n");
        }

    } while (choice != 4);

    printf("Exiting Library System. Goodbye!\n");
    return 0;
}