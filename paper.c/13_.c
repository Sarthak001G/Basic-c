#include <stdio.h>
#include <string.h>
#include <ctype.h>

void remove_vowels(char str[]) {
    int length = strlen(str);
    int i, j;

    for (i = 0; i < length; i++) {
        // Check if the current character is a vowel
        if (tolower(str[i]) == 'a' || tolower(str[i]) == 'e' || tolower(str[i]) == 'i' || 
            tolower(str[i]) == 'o' || tolower(str[i]) == 'u') {
            // Shift characters to the left
            for (j = i; j < length - 1; j++) {
                str[j] = str[j + 1];
            }
            str[length - 1] = '\0'; // Null-terminate the string
            length--; // Reduce the length of the string
            i--; // Recheck the new character at position i
        }
    }
}

int main() {
    char str[10001];

    // Read input string from user
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    str[strcspn(str, "\n")] = '\0';

    remove_vowels(str);

    // Print the string without vowels
    printf("String without vowels: %s\n", str);

    return 0;
}
