#include <stdio.h>

int main() {
    int n1, n2;
    printf("Enter size of first array: ");
    scanf("%d", &n1);
    int arr1[n1];
    printf("Enter %d elements: ", n1);
    for (int i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter size of second array: ");
    scanf("%d", &n2);
    int arr2[n2];
    printf("Enter %d elements: ", n2);
    for (int i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    int unionArr[n1 + n2];
    int k = 0;

    // Add elements of first array (avoiding duplicates)
    for (int i = 0; i < n1; i++) {
        int found = 0;
        for (int j = 0; j < k; j++) {
            if (unionArr[j] == arr1[i]) {
                found = 1;
                break;
            }
        }
        if (!found) {
            unionArr[k++] = arr1[i];
        }
    }

    // Add elements of second array (avoiding duplicates)
    for (int i = 0; i < n2; i++) {
        int found = 0;
        for (int j = 0; j < k; j++) {
            if (unionArr[j] == arr2[i]) {
                found = 1;
                break;
            }
        }
        if (!found) {
            unionArr[k++] = arr2[i];
        }
    }

    printf("Union of arrays: ");
    for (int i = 0; i < k; i++) {
        printf("%d ", unionArr[i]);
    }
    printf("\n");

    return 0;
}