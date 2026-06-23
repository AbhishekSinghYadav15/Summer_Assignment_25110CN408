// program to print armstrong number in a range
#include <stdio.h>
#include <math.h>
int main() {
    int low, high;
    printf("Enter lower limit: ");
    scanf("%d", &low);
    printf("Enter upper limit: ");
    scanf("%d", &high);
    printf("Armstrong numbers between %d and %d are:\n", low, high);
    for (int n = low; n <= high; n++) {
        int temp = n, digits = 0, sum = 0;
        // count digits
        while (temp != 0) {
            digits++;
            temp /= 10;
        }
        temp = n;
        // calculate armstrong sum
        while (temp != 0) {
            int digit = temp % 10;
            sum += (int)pow(digit, digits);
            temp /= 10;
        }
        if (sum == n)
            printf("%d ", n);
    }
    printf("\n");
    return 0;
}