#include <stdio.h>

#define SIZE 4  // For a 4x4 matrix, can be modified to take user input

// Function to input the matrix
void inputMatrix(int matrix[SIZE][SIZE]) {
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}

// Function to print the matrix in zig-zag form
void printZigZag(int matrix[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        if (i % 2 == 0) {
            // Print the row from left to right
            for (int j = 0; j < SIZE; j++) {
                printf("%d ", matrix[i][j]);
            }
        } else {
            // Print the row from right to left
            for (int j = SIZE - 1; j >= 0; j--) {
                printf("%d ", matrix[i][j]);
            }
        }
        printf("\n");
    }
}

int main() {
    int matrix[SIZE][SIZE];

    // Input the matrix
    inputMatrix(matrix);

    // Print the matrix in zig-zag form
    printf("\nZig-Zag Matrix:\n");
    printZigZag(matrix);

    return 0;
}
