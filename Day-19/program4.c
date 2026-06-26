#include <stdio.h>

int main() {
    int n;
    printf("Enter size of square matrix: ");
    scanf("%d", &n);

    int a[n][n];

    printf("Enter elements of matrix:\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    int primarySum = 0, secondarySum = 0;

    for (int i = 0; i < n; i++) {
        primarySum   += a[i][i];           // Primary diagonal
        secondarySum += a[i][n - i - 1];  // Secondary diagonal
    }

    printf("Primary Diagonal Sum   = %d\n", primarySum);
    printf("Secondary Diagonal Sum = %d\n", secondarySum);

    return 0;
}