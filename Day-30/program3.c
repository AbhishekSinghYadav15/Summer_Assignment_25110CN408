#include <stdio.h>
#include <string.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    struct Employee emp[50];
    int count = 0, choice;

    do {
        printf("\n=== Mini Employee Management System ===\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Search Employee\n");
        printf("4. Find Highest Paid Employee\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter Employee ID: ");
                scanf("%d", &emp[count].id);
                printf("Enter Name: ");
                scanf("%s", emp[count].name);
                printf("Enter Salary: ");
                scanf("%f", &emp[count].salary);
                count++;
                printf("Employee added!\n");
                break;

            case 2:
                printf("\n%-5s %-20s %-10s\n", "ID", "Name", "Salary");
                for (int i = 0; i < count; i++)
                    printf("%-5d %-20s %-10.2f\n", emp[i].id, emp[i].name, emp[i].salary);
                break;

            case 3: {
                int id, found = 0;
                printf("Enter Employee ID to search: ");
                scanf("%d", &id);
                for (int i = 0; i < count; i++) {
                    if (emp[i].id == id) {
                        printf("Found: %s, Salary = %.2f\n", emp[i].name, emp[i].salary);
                        found = 1;
                    }
                }
                if (!found) printf("Employee not found!\n");
                break;
            }

            case 4: {
                if (count == 0) {
                    printf("No employees in records!\n");
                    break;
                }
                int maxIndex = 0;
                for (int i = 1; i < count; i++)
                    if (emp[i].salary > emp[maxIndex].salary)
                        maxIndex = i;
                printf("Highest Paid: %s, Salary = %.2f\n", emp[maxIndex].name, emp[maxIndex].salary);
                break;
            }

            case 5:
                printf("Exiting System!\n");
                break;
        }

    } while (choice != 5);

    return 0;
}