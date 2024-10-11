#include<stdio.h>

int main(){
    int n;
    long long product = 1;

    printf("Enter the number for which you want to print factorial:\n");
    scanf("%d", &n);

    // Check for edge case when n <= 0
    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else if (n == 0) {
        // Factorial of 0 is 1
        printf("The factorial of 0 is: 1\n");
    } else {
        // Loop to calculate factorial
        for (int i = n; i > 0; i--) {
            product *= i;  // Multiply product by i in each iteration
            printf("%lld\n",product);
        }
        // Print the result
        printf("The factorial of %d is: %lld\n", n, product);
    }

    return 0;
}
