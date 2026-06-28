#include <stdio.h>

int main() {
    int n, d;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter number of positions to rotate left: ");
    scanf("%d", &d);
    d = d % n;

    int temp[n];
    for (int i = 0; i < n; i++) {
        temp[i] = arr[(i + d) % n];
    }

    printf("Array after left rotation: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", temp[i]);
    }
    printf("\n");

    return 0;
}