#include <stdio.h>

struct Employee {
    int empId;
    char name[50];
    char department[50];
    float salary;
};

int main() {
    int n;
    printf("Enter number of employees: ");
    scanf("%d", &n);

    struct Employee emp[n];

    // Input employee records
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for employee %d:\n", i + 1);
        printf("Employee ID: ");
        scanf("%d", &emp[i].empId);
        printf("Name: ");
        scanf("%s", emp[i].name);
        printf("Department: ");
        scanf("%s", emp[i].department);
        printf("Salary: ");
        scanf("%f", &emp[i].salary);
    }

    // Display employee records
    printf("\n=== Employee Records ===\n");
    printf("%-10s %-20s %-20s %-10s\n", "Emp ID", "Name", "Department", "Salary");
    printf("----------------------------------------------------------\n");
    for (int i = 0; i < n; i++) {
        printf("%-10d %-20s %-20s %-10.2f\n",
               emp[i].empId,
               emp[i].name,
               emp[i].department,
               emp[i].salary);
    }

    // Find highest paid employee
    int maxIndex = 0;
    for (int i = 1; i < n; i++) {
        if (emp[i].salary > emp[maxIndex].salary)
            maxIndex = i;
    }
    printf("\nHighest Paid Employee: %s (Rs. %.2f)\n",
           emp[maxIndex].name, emp[maxIndex].salary);

    return 0;
}