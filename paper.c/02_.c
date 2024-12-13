#include <stdio.h>

int main() {
    int year;

    // Input: Read the upper limit year from the user
    scanf("%d", &year);

    // Validate the input range
    if (year < 1 || year > 10000) {
        printf("Invalid input\n");
        return 1;
    }

    // Print all leap years from 1 to the given year
    for (int i = 1; i <= year; i++) {
        if ((i % 400 == 0) || (i % 4 == 0 && i % 100 != 0)) {
            printf("%d\n", i);
        }
    }

    return 0;
}
