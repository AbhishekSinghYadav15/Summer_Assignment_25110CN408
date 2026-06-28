#include <stdio.h>

int main() {
    char name[50];
    int rollNo;
    float marks[5], total = 0, percentage;
    char subjects[5][20] = {"Maths", "Physics", "Chemistry", "English", "Computer"};
    char grade;

    printf("=== Marksheet Generation System ===\n");
    printf("Enter Roll No: ");
    scanf("%d", &rollNo);
    printf("Enter Student Name: ");
    scanf("%s", name);

    printf("Enter marks for 5 subjects (out of 100):\n");
    for (int i = 0; i < 5; i++) {
        printf("%s: ", subjects[i]);
        scanf("%f", &marks[i]);
        total += marks[i];
    }

    percentage = total / 5;

    if (percentage >= 90)      grade = 'A';
    else if (percentage >= 80) grade = 'B';
    else if (percentage >= 70) grade = 'C';
    else if (percentage >= 60) grade = 'D';
    else                       grade = 'F';

    // Display marksheet
    printf("\n========== MARKSHEET ==========\n");
    printf("Roll No     : %d\n", rollNo);
    printf("Name        : %s\n", name);
    printf("--------------------------------\n");
    printf("%-15s %s\n", "Subject", "Marks");
    printf("--------------------------------\n");
    for (int i = 0; i < 5; i++)
        printf("%-15s %.2f\n", subjects[i], marks[i]);
    printf("--------------------------------\n");
    printf("Total       : %.2f / 500\n", total);
    printf("Percentage  : %.2f%%\n", percentage);
    printf("Grade       : %c\n", grade);

    if (grade == 'F')
        printf("Result      : FAIL\n");
    else
        printf("Result      : PASS\n");

    printf("================================\n");

    return 0;
}