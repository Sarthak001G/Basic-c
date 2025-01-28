#include <stdio.h>
#include <ctype.h>
#include <string.h>

void capitalize(char str[]) {
    int length = strlen(str);
    
   int count=0;
    for (int i = 1; i < length; i++) {
        // If the current character is a space and the next character is an alphabet
        if (str[i] == ' ' && isalpha(str[i + 1])) {
            str[i + 1] = toupper(str[i + 1]);
        } else {
            str[i] = tolower(str[i]);
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
    
    capitalize(str);
    
    // Print the capitalized string
    printf("Capitalized string: %s\n", str);
    
    return 0;
}
