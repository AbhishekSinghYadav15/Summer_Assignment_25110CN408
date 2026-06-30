#include <stdio.h>

int main() {
    int arr[100], n = 0, choice;

    do {
        printf("\n=== Array Operations Menu ===\n");
        printf("1. Input Array\n");
        printf("2. Display Array\n");
        printf("3. Find Sum and Average\n");
        printf("4. Find Largest and Smallest\n");
        printf("5. Sort Array (Ascending)\n");
        printf("6. Reverse Array\n");
        printf("7. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter number of elements: ");
                scanf("%d", &n);
                printf("Enter %d elements: ", n);
                for (int i = 0; i < n; i++)
                    scanf("%d", &arr[i]);
                break;

            case 2:
                printf("Array: ");
                for (int i = 0; i < n; i++)
                    printf("%d ", arr[i]);
                printf("\n");
                break;

            case 3: {
                int sum = 0;
                for (int i = 0; i < n; i++) sum += arr[i];
                printf("Sum = %d\n", sum);
                printf("Average = %.2f\n", (float)sum / n);
                break;
            }

            case 4: {
                int largest = arr[0], smallest = arr[0];
                for (int i = 1; i < n; i++) {
                    if (arr[i] > largest) largest = arr[i];
                    if (arr[i] < smallest) smallest = arr[i];
                }
                printf("Largest = %d, Smallest = %d\n", largest, smallest);
                break;
            }

            case 5:
                for (int i = 0; i < n - 1; i++)
                    for (int j = 0; j < n - i - 1; j++)
                        if (arr[j] > arr[j + 1]) {
                            int temp = arr[j];
                            arr[j] = arr[j + 1];
                            arr[j + 1] = temp;
                        }
                printf("Array sorted successfully!\n");
                break;

            case 6: {
                int start = 0, end = n - 1;
                while (start < end) {
                    int temp = arr[start];
                    arr[start] = arr[end];
                    arr[end] = temp;
                    start++;
                    end--;
                }
                printf("Array reversed successfully!\n");
                break;
            }

            case 7:
                printf("Exiting Array Operations System!\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while (choice != 7);

    return 0;
}