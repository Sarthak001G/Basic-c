#include <stdio.h>

int main() {
    int n, val, found = 0;

    // Read the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    // Read the elements of the array
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Read the value to be deleted
    printf("Enter the value to be deleted: ");
    scanf("%d", &val);

    // Search and delete the value
    for (int i = 0; i < n; i++) {
        if (arr[i] == val) {
            found = 1;
            for (int j = i; j < n - 1; j++) {
                arr[j] = arr[j + 1];
            }
            n--; // Reduce the size of the array
            i--; // Adjust the index to check the shifted element
        }
    }

    // Print the array after deletion or "Not found" if the value was not in the array
    if (found) {
        printf("Array after deletion: ");
        for (int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    } else {
        printf("Not found.\n");
    }

    return 0;
}
