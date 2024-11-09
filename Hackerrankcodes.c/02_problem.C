#include <stdio.h>

int main() {
    int a, b;
    scanf("%d\n%d", &a, &b);

    for (int i = a; i <= b; i++) {
        if (i >= 1 && i <= 9) {
            // Array of strings for numbers 1 to 9
            const char *numbers[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
            printf("%s\n", numbers[i - 1]);
        } else if (i > 9) {
            // Check if the number is even or odd
            if (i % 2 == 0) {
                printf("even\n");
            } else {
                printf("odd\n");
            }
        }
    }
    
    return 0;
}
