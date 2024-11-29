/*#include<stdio.h>
#include<string.h>

void main(){
    char str[]="Compsc\0\bits\0";
    printf("%s\n",str);
    
}*/
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

    printf("Row sums:\n");
    for (int i = 0; i < M; i++) {
        int rowSum = 0;
        for (int j = 0; j < N; j++) {
            rowSum += arr[i][j];
        }
        printf("Row %d sum = %d\n", i + 1, rowSum);
    }

    printf("Column sums:\n");
    for (int j = 0; j < N; j++) {
        int colSum = 0;
        for (int i = 0; i < M; i++) {
            colSum += arr[i][j];
        }
        printf("Column %d sum = %d\n", j + 1, colSum);
    }

    return 0;
}
*/
#include <stdio.h>

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

    printf("Boundary elements of the matrix:\n");
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            if (i == 0 || i == M - 1 || j == 0 || j == N - 1) {
                printf("%d\t", arr[i][j]);
            } else {
                printf("\t");
            }
        }
        printf("\n");
    }

    return 0;
}
