// programm to find Lcm of two numbers
#include <stdio.h>
int main() {
    int a, b, gcd, lcm;
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    x = a;
    y = b;
    // find GCD first
    while (x != y) {
        if (x > y)
            x -= y;
        else
            y -= x;
    }
    gcd = x;
    lcm = (a * b) / gcd;
    printf("LCM = %d\n", lcm);
    return 0;
}