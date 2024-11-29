/*#include <stdio.h>

int main() {
    int M, N;
    printf("Enter the number of rows (M) and columns (N): ");
    scanf("%d %d", &M, &N);

    int arr[M][N];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Transpose of the array:\n");
    for (int j = 0; j < N; j++) {
        for (int i = 0; i < M; i++) {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}*/
/*#include <stdio.h>

int main() {
    int M, N;
    printf("Enter the number of rows (M) and columns (N): ");
    scanf("%d %d", &M, &N);

    if (M != N) {
        printf("Matrix must be square to calculate diagonal sum.\n");
        return 0;
    }

    int arr[M][N];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    int primarySum = 0, secondarySum = 0;
    for (int i = 0; i < M; i++) {
        primarySum += arr[i][i];
        secondarySum += arr[i][M - i - 1];
    }

    printf("Sum of primary diagonal elements: %d\n", primarySum);
    printf("Sum of secondary diagonal elements: %d\n", secondarySum);

    return 0;
}*/
#include <stdio.h>

int main() {
    int M, N;
    printf("Enter the number of rows (M) and columns (N): ");
    scanf("%d %d", &M, &N);

    if (M != N) {
        printf("Matrix must be square to display diagonal elements.\n");
        return 0;
    }

    int arr[M][N];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Matrix with diagonal elements:\n");
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            if (i == j || j == M - i - 1) {
                printf("%d\t", arr[i][j]);
            } else {
                printf("\t");
            }
        }
        printf("\n");
    }

    return 0;
}

