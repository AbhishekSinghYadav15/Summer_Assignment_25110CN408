#include <stdio.h>
#include <string.h>
#include <ctype.h>

struct Student {
    int rollNo;
    char name[50];
    float marks;
};

// Function to add a student
void addStudent(struct Student students[], int *count) {
    printf("Enter Roll No: ");
    scanf("%d", &students[*count].rollNo);
    printf("Enter Name: ");
    scanf("%s", students[*count].name);
    printf("Enter Marks: ");
    scanf("%f", &students[*count].marks);
    (*count)++;
    printf("Student added successfully!\n");
}

// Function to display all students
void displayStudents(struct Student students[], int count) {
    printf("\n%-10s %-20s %-10s\n", "Roll No", "Name", "Marks");
    for (int i = 0; i < count; i++)
        printf("%-10d %-20s %-10.2f\n", students[i].rollNo, students[i].name, students[i].marks);
}

// Function to find the student with the highest marks
void findTopper(struct Student students[], int count) {
    if (count == 0) {
        printf("No students in record!\n");
        return;
    }
    int topperIndex = 0;
    for (int i = 1; i < count; i++)
        if (students[i].marks > students[topperIndex].marks)
            topperIndex = i;
    printf("Topper: %s with %.2f marks\n", students[topperIndex].name, students[topperIndex].marks);
}

// Function to search a student by name
void searchStudent(struct Student students[], int count, char name[]) {
    int found = 0;
    for (int i = 0; i < count; i++) {
        if (strcmp(students[i].name, name) == 0) {
            printf("Found: Roll No %d, Marks = %.2f\n", students[i].rollNo, students[i].marks);
            found = 1;
        }
    }
    if (!found) printf("Student not found!\n");
}

// Function to sort students by marks (descending)
void sortStudents(struct Student students[], int count) {
    struct Student temp;
    for (int i = 0; i < count - 1; i++) {
        for (int j = 0; j < count - i - 1; j++) {
            if (students[j].marks < students[j + 1].marks) {
                temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }
    printf("Students sorted by marks (descending)!\n");
}

int main() {
    struct Student students[100];
    int count = 0, choice;
    char searchName[50];

    do {
        printf("\n=== Mini Project: Student Management System ===\n");
        printf("1. Add Student\n");
        printf("2. Display All Students\n");
        printf("3. Find Topper\n");
        printf("4. Search Student\n");
        printf("5. Sort Students by Marks\n");
        printf("6. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addStudent(students, &count);
                break;
            case 2:
                displayStudents(students, count);
                break;
            case 3:
                findTopper(students, count);
                break;
            case 4:
                printf("Enter name to search: ");
                scanf("%s", searchName);
                searchStudent(students, count, searchName);
                break;
            case 5:
                sortStudents(students, count);
                break;
            case 6:
                printf("Exiting Program. Goodbye!\n");
                break;
            default:
                printf("Invalid choice!\n");
        }

    } while (choice != 6);

    return 0;
}