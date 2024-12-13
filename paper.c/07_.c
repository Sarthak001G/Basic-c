#include <stdio.h>

// Function to subtract two numbers without using '-' operator
int subtract(int n1, int n2) {
    // Using bitwise complement and addition to perform subtraction
    return n1 + (~n2 + 1);
}

int main() {
    int n1, n2;

    // Input: Read two integers from the user
    scanf("%d %d", &n1, &n2);

    // Check constraints
    if (n1 >= -100000 && n1 <= 100000 && n2 >= -100000 && n2 <= 100000) {
        // Perform subtraction and print the result
        printf("%d\n", subtract(n1, n2));
    } else {
        printf("Input values are out of the allowed range.\n");
    }

    return 0;
}