#include <stdio.h>

int main() {
    int n, key;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    int found = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            printf("Element found at index %d\n", i);
            found = 1;
            break;
        }
    }

    if (!found)
        printf("Element not found\n");

    return 0;
}