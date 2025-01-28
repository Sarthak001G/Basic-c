#include <stdio.h>

int main() {
    int n;

    // Read the number of locations
    printf("Enter the number of locations: ");
    scanf("%d", &n);

    int routes[n];

    // Read the number of routes for each location
    printf("Enter the routes for each location: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &routes[i]);
    }

    // Find the maximum number of routes
    int max_routes = routes[0];
    for (int i = 1; i < n; i++) {
        if (routes[i] > max_routes) {
            max_routes = routes[i];
        }
    }

    // Count how many locations have the maximum number of routes
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (routes[i] == max_routes) {
            count++;
        }
    }

    // Print the number of best possible locations
    printf("%d\n", count);

    return 0;
}
