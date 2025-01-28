#include <stdio.h>

void move_zeros_to_end(int arr[], int n) {
    int count = 0; // Count of non-zero elements

    // Traverse the array
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            // Swap non-zero element with the element at index 'count'
            arr[count++] = arr[i];
        }
    }

    // Fill remaining array with zeros
    while (count < n) {
        arr[count++] = 0;
    }
}

int main() {
    int n;

    // Read the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    // Read array elements
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Move zeros to the end
    move_zeros_to_end(arr, n);

    // Print the modified array
    printf("Modified array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
