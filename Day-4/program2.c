// program to find nth fibonacci term
#include <stdio.h>
int main() {
    int n;
    printf("Enter the value of N: ");
    scanf("%d", &n);
    long long a = 0, b = 1, next;
    if (n == 1) {
        printf("Nth Fibonacci term = 0\n");
        return 0;
    }
    if (n == 2) {
        printf("Nth Fibonacci term = 1\n");
        return 0;
    }
    for (int i = 3; i <= n; i++) {
        next = a + b;
        a = b;
        b = next;
    }
    printf("Nth Fibonacci term = %lld\n", b);
    return 0;
}