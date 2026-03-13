#include <stdio.h>

int main() {
    int a, b, i = 2, gcd = 1;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    while (i <= a && i <= b) {
        if (a % i == 0 && b % i == 0) {
            gcd = gcd * i;
            a = a / i;
            b = b / i;
        } else {
            i++;
        }
    }

    printf("GCD = %d", gcd);

    return 0;
}
