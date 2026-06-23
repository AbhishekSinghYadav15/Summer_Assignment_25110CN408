#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int result[n];
    int j = 0;

    for (int i = 0; i < n; i++) {
        int isDuplicate = 0;
        for (int k = 0; k < j; k++) {
            if (arr[i] == result[k]) {
                isDuplicate = 1;
                break;
            }
        }
        if (!isDuplicate) {
            result[j] = arr[i];
            j++;
        }
    }

    printf("Array after removing duplicates: ");
    for (int i = 0; i < j; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");

    return 0;
}