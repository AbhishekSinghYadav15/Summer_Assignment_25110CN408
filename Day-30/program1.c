#include <stdio.h>
#include <string.h>

struct Student {
    int rollNo;
    char name[50];
    float marks[3];
    float total, percentage;
};

int main() {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student students[n];

    for (int i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Roll No: ");
        scanf("%d", &students[i].rollNo);
        printf("Name: ");
        scanf("%s", students[i].name);

        students[i].total = 0;
        for (int j = 0; j < 3; j++) {
            printf("Marks for subject %d: ", j + 1);
            scanf("%f", &students[i].marks[j]);
            students[i].total += students[i].marks[j];
        }
        students[i].percentage = students[i].total / 3;
    }

    // Display all records
    printf("\n=== Student Records ===\n");
    printf("%-10s %-20s %-10s %-10s\n", "Roll No", "Name", "Total", "Percentage");
    for (int i = 0; i < n; i++) {
        printf("%-10d %-20s %-10.2f %-10.2f\n",
               students[i].rollNo, students[i].name,
               students[i].total, students[i].percentage);
    }

    // Find topper
    int topperIndex = 0;
    for (int i = 1; i < n; i++) {
        if (students[i].total > students[topperIndex].total)
            topperIndex = i;
    }
    printf("\nTopper: %s with %.2f%% marks\n",
           students[topperIndex].name, students[topperIndex].percentage);

    return 0;
}