// programm to generate fibonacci series
#include <stdio.h>
int main() {
    int n;
    printf("Enter number of terms: ");
    scanf("%d", &n);
    long long a = 0, b = 1, next;
    printf("Fibonacci Series: ");
    for (int i = 1; i <= n; i++) {
        printf("%lld ", a);
        next = a + b;
        a = b;
        b = next;
    }
    printf("\n");
    return 0;
}