#include <stdio.h>

// Function to calculate the sum of squares of natural numbers up to n
long long sumOfSquares(int n) {
    return (long long)n * (n + 1) * (2 * n + 1) / 6;
}

int main() {
    int n;

    // Input: Read an integer n from the user
    scanf("%d", &n);

    // Check constraints
    if (n > 0 && n < 10000) {
        // Calculate and print the sum of squares
        printf("%lld\n", sumOfSquares(n));
    } else {
        printf("Input value is out of the allowed range.\n");
    }

    return 0;
}
