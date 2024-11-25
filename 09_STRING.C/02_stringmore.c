#include <stdio.h>

int main() {
    char a[] = "abcd";  // Array a with 5 elements (4 characters + null terminator)
    char b[5];          // Buffer for input
    char c[5];          // Another buffer for input

    printf("Enter a word for c (max 4 characters): ");
    scanf("%4s", c);    // Read up to 4 characters + null terminator

    printf("Enter a word for b (max 4 characters): ");
    getchar();          // Consume the leftover newline from previous input
    fgets(b, sizeof(b), stdin); // Use fgets to safely read input into b

    // Remove newline character if present in b
    for (int i = 0; i < sizeof(b); i++) {
        if (b[i] == '\n') {
            b[i] = '\0';
            break;
        }
    }

    // Print characters in a
    printf("\nCharacters in array a: ");
    for (int i = 0; i < 4; i++) { // Iterate only up to 4 to exclude null terminator
        printf("%c", a[i]);
    }

    // Print the strings
    printf("\n\nString b: ");
    puts(b);

    printf("String c: ");
    puts(c);

    return 0;
}
