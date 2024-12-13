#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char str[10001];
    char vowels[10001] = "", consonants[10001] = "";
    int vIndex = 0, cIndex = 0;

    // Input: Read a string from the user
    fgets(str, sizeof(str), stdin);

    // Iterate through each character in the string
    for (int i = 0; i < strlen(str); i++) {
        if (isalpha(str[i])) { // Check if character is an alphabet
            char lowerChar = tolower(str[i]);
            if (lowerChar == 'a' || lowerChar == 'e' || lowerChar == 'i' || lowerChar == 'o' || lowerChar == 'u') {
                vowels[vIndex++] = str[i];
            } else {
                consonants[cIndex++] = str[i];
            }
        }
    }

    // Null-terminate the strings
    vowels[vIndex] = '\0';
    consonants[cIndex] = '\0';

    // Output results
    printf("%s\n", vowels);
    printf("%s\n", consonants);

    return 0;
}