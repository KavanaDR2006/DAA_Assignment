#include <stdio.h>
#include <stdbool.h>

#define LIMIT 1000
void generatePrimes(int limit) {
    bool sieve[limit + 1];   
    // Initialize all numbers as prime candidates
    for (int i = 0; i <= limit; i++) {
        sieve[i] = true;
    }  
    sieve[0] = sieve[1] = false; // 0 and 1 are not prime   
    // Sieve of Eratosthenes
    for (int num = 2; num * num <= limit; num++) {
        if (sieve[num]) {
            for (int multiple = num * num; multiple <= limit; multiple += num) {
                sieve[multiple] = false;
            }
        }
    }   
    // Print prime numbers
    printf("Prime numbers up to %d:\n", limit);
    for (int i = 2; i <= limit; i++) {
        if (sieve[i]) {
            printf("%d ", i);
        }
    }
    printf("\n");
}
int main() {
    generatePrimes(LIMIT);
    return 0;
}
