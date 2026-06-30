// program to check armstrong number
#include <stdio.h>
#include <math.h>
int main() {
    int n, original, digits = 0, sum = 0, temp;
    printf("Enter a number: ");
    scanf("%d", &n);
    original = n;
    temp = n;
    // count number of digits
    while (temp != 0) {
        digits++;
        temp /= 10;
    }
    temp = n;
    // calculate sum of digits raised to power of digit count
    while (temp != 0) {
        int digit = temp % 10;
        sum += (int)pow(digit, digits);
        temp /= 10;
    }
    if (sum == original)
        printf("%d is an Armstrong number\n", original);
    else
        printf("%d is NOT an Armstrong number\n", original);
    return 0;
}