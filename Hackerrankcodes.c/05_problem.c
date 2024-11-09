#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>




int main() {
    int n;
    scanf("%d", &n);

    int size = 2 * n - 1;

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            // Calculate the minimum distance to any edge
            int min_distance = i < size - i ? i : size - i - 1;
            min_distance = min_distance < j ? min_distance : j;
            min_distance = min_distance < size - j - 1 ? min_distance : size - j - 1;

            // Calculate value for the current position
            int value = n - min_distance;
            printf("%d ", value);
        }
        printf("\n");
    }
    
    return 0;
}
