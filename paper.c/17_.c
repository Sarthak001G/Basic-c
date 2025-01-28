#include <stdio.h>
#include <limits.h>

void find_top_two_salaries(int arr[], int n, int *e1, int *e2) {
    int first = INT_MIN, second = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }

    *e1 = first;
    *e2 = second;
}

int main() {
    int n;

    // Read the number of employees
    printf("Enter the number of employees: ");
    scanf("%d", &n);

    int arr[n];

    // Read the salaries of employees
    printf("Enter the salaries of employees: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int e1, e2;
    find_top_two_salaries(arr, n, &e1, &e2);

    // Print the salaries of E1 and E2
    printf("%d %d\n", e1, e2);

    return 0;
}
