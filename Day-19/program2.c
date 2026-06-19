#include <stdio.h>

int main() {
    int r, c;
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    int a[r][c], b[r][c], diff[r][c];

    printf("Enter elements of first matrix:\n");
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    printf("Enter elements of second matrix:\n");
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &b[i][j]);

    // Subtract matrices
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            diff[i][j] = a[i][j] - b[i][j];

    printf("Difference of matrices:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++)
            printf("%d ", diff[i][j]);
        printf("\n");
    }

    return 0;
}