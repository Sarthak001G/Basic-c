/*#include <stdio.h>

int main() {
    int matrix[3][3];
    printf("Enter the elements of the 3x3 matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int determinant = matrix[0][0] * (matrix[1][1] * matrix[2][2] - matrix[1][2] * matrix[2][1])
                    - matrix[0][1] * (matrix[1][0] * matrix[2][2] - matrix[1][2] * matrix[2][0])
                    + matrix[0][2] * (matrix[1][0] * matrix[2][1] - matrix[1][1] * matrix[2][0]);

    printf("The determinant of the matrix is: %d\n", determinant);

    return 0;
}*/
#include <stdio.h>

int main() {
    int M, N;
    printf("Enter the number of rows (M) and columns (N): ");
    scanf("%d %d", &M, &N);

    int matrix[M][N], zeroCount = 0;
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &matrix[i][j]);
            if (matrix[i][j] == 0) {
                zeroCount++;
            }
        }
    }

    printf("\nMatrix entered:\n");
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    int totalElements = M * N;
    printf("\nTotal elements: %d, Zero elements: %d\n", totalElements, zeroCount);
    
    if (zeroCount > totalElements / 2) {
        printf("The matrix is a sparse matrix.\n");
    } else {
        printf("The matrix is a dense matrix.\n");
    }

    return 0;
}

