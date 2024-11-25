#include <stdio.h>

// Function to check if the specified side is folded (all zeros)
int is_folded_side(int matrix[][100], int n, const char* side) {
    if (side == "left") {
        // Check if the leftmost column is all zeros
        for (int i = 0; i < n; i++) {
            if (matrix[i][0] != 0) return 0; // Not folded if any value is non-zero
        }
    } else if (side == "right") {
        // Check if the rightmost column is all zeros
        for (int i = 0; i < n; i++) {
            if (matrix[i][n - 1] != 0) return 0; // Not folded if any value is non-zero
        }
    } else if (side == "top") {
        // Check if the topmost row is all zeros
        for (int j = 0; j < n; j++) {
            if (matrix[0][j] != 0) return 0; // Not folded if any value is non-zero
        }
    } else if (side == "bottom") {
        // Check if the bottommost row is all zeros
        for (int j = 0; j < n; j++) {
            if (matrix[n - 1][j] != 0) return 0; // Not folded if any value is non-zero
        }
    }
    return 1; // Return 1 if the side is folded (all zeros)
}

// Function to check the fold status of the matrix
void check_fold(int matrix[][100], int n) {
    if (is_folded_side(matrix, n, "left")) {
        printf("Folded Left\n");
    } else if (is_folded_side(matrix, n, "right")) {
        printf("Folded Right\n");
    } else if (is_folded_side(matrix, n, "top")) {
        printf("Folded Top\n");
    } else if (is_folded_side(matrix, n, "bottom")) {
        printf("Folded Bottom\n");
    } else {
        printf("Not Folded\n");
    }
}

int main() {
    int n;
    printf("Enter the size of the matrix (N): ");
    scanf("%d", &n);

    int matrix[100][100]; // Assume matrix size will not exceed 100x100

    printf("Enter the matrix elements:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Check the fold status
    check_fold(matrix, n);

    return 0;
}
