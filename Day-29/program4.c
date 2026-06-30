#include <stdio.h>
#include <string.h>

struct Item {
    int id;
    char name[50];
    int quantity;
    float price;
};

int main() {
    struct Item items[100];
    int count = 0, choice;

    do {
        printf("\n=== Inventory Management System ===\n");
        printf("1. Add Item\n");
        printf("2. Display All Items\n");
        printf("3. Update Stock\n");
        printf("4. Find Total Inventory Value\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter Item ID: ");
                scanf("%d", &items[count].id);
                printf("Enter Item Name: ");
                scanf("%s", items[count].name);
                printf("Enter Quantity: ");
                scanf("%d", &items[count].quantity);
                printf("Enter Price: ");
                scanf("%f", &items[count].price);
                count++;
                printf("Item added successfully!\n");
                break;

            case 2:
                printf("\n%-5s %-20s %-10s %-10s\n", "ID", "Name", "Qty", "Price");
                for (int i = 0; i < count; i++)
                    printf("%-5d %-20s %-10d %-10.2f\n",
                           items[i].id, items[i].name, items[i].quantity, items[i].price);
                break;

            case 3: {
                int id, newQty, found = 0;
                printf("Enter Item ID to update: ");
                scanf("%d", &id);
                printf("Enter new quantity: ");
                scanf("%d", &newQty);
                for (int i = 0; i < count; i++) {
                    if (items[i].id == id) {
                        items[i].quantity = newQty;
                        found = 1;
                        printf("Stock updated successfully!\n");
                        break;
                    }
                }
                if (!found) printf("Item ID not found!\n");
                break;
            }

            case 4: {
                float total = 0;
                for (int i = 0; i < count; i++)
                    total += items[i].quantity * items[i].price;
                printf("Total Inventory Value = Rs. %.2f\n", total);
                break;
            }

            case 5:
                printf("Exiting Inventory Management System!\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while (choice != 5);

    return 0;
}