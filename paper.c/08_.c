#include <stdio.h>
#include <stdbool.h>

// Function to check if a number is prime
bool isPrime(int num) {
    if (num < 2) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    int N;

    // Input: Read an integer N from the user
    scanf("%d", &N);

    // Check constraints
    if (N >= 2 && N <= 100000000) {
        // Print all prime numbers from 1 to N
        for (int i = 2; i <= N; i++) {
            if (isPrime(i)) {
                printf("%d,", i);
            }
        }
    } else {
        printf("Input value is out of the allowed range.\n");
    }

    return 0;
}
