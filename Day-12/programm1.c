#include <stdio.h>

int isPalindrome(int n) {
    int original = n, reverse = 0;
    while (n != 0) {
        reverse = reverse * 10 + n % 10;
        n /= 10;
    }
    return original == reverse;
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (isPalindrome(n))
        printf("%d is Palindrome\n", n);
    else
        printf("%d is Not Palindrome\n", n);
    return 0;
}