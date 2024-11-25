#include <stdio.h>

int main() {
    char st[4]; // Increased size to accommodate null terminator
    char st1[] = {'a', 'b', 'c', '\0'}; // Properly null-terminated
    printf("Enter 3 characters for st:\n");

    for (int i = 0; i < 3; i++) {
        scanf(" %c", &st[i]); // Added space before %c to consume whitespace
    }
    st[3] = '\0'; // Add null terminator to st

    printf("\nValues of st are:\n");
    for (int i = 0; i < 3; i++) { 
        printf("%c ", st[i]);
    }

    printf("\n\nValues of st1 are:\n");
    for (int i = 0; i < 3; i++) { 
        printf("%c ", st1[i]);
    }
    return 0;
}
