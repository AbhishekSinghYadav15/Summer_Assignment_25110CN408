#include <stdio.h>

struct Student {
    int rollNo;
    char name[50];
    float marks;
    char grade;
};

char getGrade(float marks) {
    if (marks >= 90) return 'A';
    else if (marks >= 80) return 'B';
    else if (marks >= 70) return 'C';
    else if (marks >= 60) return 'D';
    else return 'F';
}

int main() {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student students[n];

    // Input student records
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Roll No: ");
        scanf("%d", &students[i].rollNo);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
        students[i].grade = getGrade(students[i].marks);
    }

    // Display student records
    printf("\n=== Student Records ===\n");
    printf("%-10s %-20s %-10s %-10s\n", "Roll No", "Name", "Marks", "Grade");
    printf("--------------------------------------------------\n");
    for (int i = 0; i < n; i++) {
        printf("%-10d %-20s %-10.2f %-10c\n",
               students[i].rollNo,
               students[i].name,
               students[i].marks,
               students[i].grade);
    }

    return 0;
}