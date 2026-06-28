//programm to find product of digits

#include <stdio.h>
int main() {
    long long n;
    long long product = 1;
    printf("Enter a number: ");
    scanf("%lld", &n);
    if (n < 0) n = -n;  // handle negative numbers
    while (n != 0) {
        product *= n % 10;
        n /= 10;
    }
    printf("Product of digits = %lld\n", product);
    return 0;
}