#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    // Initialize sum variable to store the sum of digits
    int remain = 0;
    
    // Check if n is a five-digit number
    if (n >= 10000 && n <= 99999) {
        // Loop to extract and sum each digit
        while (n > 0) {
            remain += n % 10;  // Add the last digit of n to remain
            n /= 10;            // Remove the last digit from n
        }
        // Print the result
        printf("%d\n", remain);
    } else {
        printf("Please enter a five-digit number.\n");
    }
    
    return 0;
}
