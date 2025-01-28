#include <stdio.h>

int main() {
    int m, n;
    
    // Read number of rows and columns
    printf("Enter the number of rows and columns (m n): ");
    scanf("%d %d", &m, &n);
    
    int matrix[m][n];
    long long sum = 0; // Use long long for large sums
    long long product = 1; // Use long long for large products

    // Read the elements of the matrix
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
            sum += matrix[i][j];
            product *= matrix[i][j];
        }
    }

    // Print the sum and product of the matrix elements
    printf("Sum of elements: %lld\n", sum);
    printf("Product of elements: %lld\n", product);

    return 0;
}
