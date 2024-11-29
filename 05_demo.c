/*#include <stdio.h>

int main() {
    int M, N;
    printf("Enter the number of rows (M) and columns (N) for both matrices: ");
    scanf("%d %d", &M, &N);

    int matrix1[M][N], matrix2[M][N], result[M][N];

    printf("Enter elements of the first matrix:\n");
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter elements of the second matrix:\n");
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Adding the matrices
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    printf("Resultant matrix after addition:\n");
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
*/
#include <stdio.h>
#include <stdbool.h>

int main() {
    int N;
    printf("Enter the size of the square matrix (N): ");
    scanf("%d", &N);

    int matrix[N][N];
    bool isIdentity = true;

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Check if the matrix is an identity matrix
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if ((i == j && matrix[i][j] != 1) || (i != j && matrix[i][j] != 0)) {
                isIdentity = false;
                break;
            }
        }
        if (!isIdentity) break;
    }

    if (isIdentity) {
        printf("The matrix is an identity matrix.\n");
    } else {
        printf("The matrix is NOT an identity matrix.\n");
    }

    return 0;
}
