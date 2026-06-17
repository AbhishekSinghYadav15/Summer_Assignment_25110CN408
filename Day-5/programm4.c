#include <stdio.h>

int isPrime(int n) {
    if(n < 2) return 0;
    for(int i = 2; i * i <= n; i++) {
        if(n % i == 0) return 0;
    }
    return 1;
}

int main() {
    int num, largest = -1;
    printf("Enter a number: ");
    scanf("%d", &num);

    for(int i = 2; i <= num; i++) {
        if(num % i == 0 && isPrime(i)) {
            largest = i;
        }
    }

    if(largest != -1)
        printf("Largest Prime Factor of %d is %d\n", num, largest);
    else
        printf("No prime factors found.\n");

    return 0;
}
