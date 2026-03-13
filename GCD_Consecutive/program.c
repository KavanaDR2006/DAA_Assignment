#include <stdio.h>
// Function to compute GCD using Consecutive Integer Checking Algorithm
int gcd_consecutive_integer_checking(int m, int n) {
    int t = (m < n) ? m : n;  // Start with the smaller number

    while (t > 0) {
        if (m % t == 0 && n % t == 0) {
            return t;  // Found the GCD
        }
        t--;  // Decrease and check again
    }
    return 1;  // If no other divisor found, GCD is 1
}
int main() {
    int m, n, result;

    // Sample input
    m = 180;
    n = 40;

    result = gcd_consecutive_integer_checking(m, n);

    printf("GCD of %d and %d using Consecutive Integer Checking Algorithm is: %d\n", m, n, result);

    return 0;
}
