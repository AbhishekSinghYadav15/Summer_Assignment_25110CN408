// programm to reverse a number

#include <stdio.h>
int main() {
    long long n, rev = 0;
    printf("Enter a number: ");
    scanf("%lld", &n);
    if (n < 0) n = -n;  // handle negative numbers
    while (n != 0) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    printf("Reversed number = %lld\n", rev);
    return 0;
}
