#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int max_ones = 0, current_count = 0;
    while (n > 0) {
        if (n % 2 == 1) {
            current_count++;
            if (current_count > max_ones) {
                max_ones = current_count;
            }
        } else {
            current_count = 0;
        }
        n /= 2;
    }

    printf("Maximum number of consecutive 1's: %d\n", max_ones);
    return 0;
}
