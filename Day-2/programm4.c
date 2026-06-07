// programm to check whether a number is palindrome or not

#include <stdio.h>
int main() {
    long long n, original, rev = 0;
    printf("Enter a number: ");
    scanf("%lld", &n);
    original = n;
    if (n < 0) n = -n;  // handle negative numbers
    while (n != 0) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    if (original == rev)
        printf("%lld is a Palindrome\n", original);
    else
        printf("%lld is NOT a Palindrome\n", original);
    return 0;
}