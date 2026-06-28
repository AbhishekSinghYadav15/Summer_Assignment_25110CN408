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

    int maxElement = arr[0], maxCount = 0;

    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (arr[j] == arr[i])
                count++;
        }
        if (count > maxCount) {
            maxCount = count;
            maxElement = arr[i];
        }
    }

    printf("Element with maximum frequency = %d (Frequency = %d)\n", maxElement, maxCount);

    return 0;
}