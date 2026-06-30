#include <stdio.h>

int main() {
    char name[50];
    int empId;
    float basicSalary, hra, da, ta, grossSalary;
    float pf, tax, netSalary;

    printf("=== Salary Management System ===\n");
    printf("Enter Employee ID: ");
    scanf("%d", &empId);
    printf("Enter Employee Name: ");
    scanf("%s", name);
    printf("Enter Basic Salary: ");
    scanf("%f", &basicSalary);

    // Calculate allowances
    hra = 0.20 * basicSalary;   // 20% of basic
    da  = 0.50 * basicSalary;   // 50% of basic
    ta  = 0.10 * basicSalary;   // 10% of basic

    grossSalary = basicSalary + hra + da + ta;

    // Calculate deductions
    pf  = 0.12 * basicSalary;   // 12% of basic
    tax = 0.10 * grossSalary;   // 10% of gross

    netSalary = grossSalary - pf - tax;

    // Display salary slip
    printf("\n========= SALARY SLIP =========\n");
    printf("Employee ID   : %d\n", empId);
    printf("Employee Name : %s\n", name);
    printf("--------------------------------\n");
    printf("Basic Salary  : Rs. %.2f\n", basicSalary);
    printf("HRA (20%%)     : Rs. %.2f\n", hra);
    printf("DA  (50%%)     : Rs. %.2f\n", da);
    printf("TA  (10%%)     : Rs. %.2f\n", ta);
    printf("Gross Salary  : Rs. %.2f\n", grossSalary);
    printf("--------------------------------\n");
    printf("PF  (12%%)     : Rs. %.2f\n", pf);
    printf("Tax (10%%)     : Rs. %.2f\n", tax);
    printf("--------------------------------\n");
    printf("Net Salary    : Rs. %.2f\n", netSalary);
    printf("================================\n");

    return 0;
}