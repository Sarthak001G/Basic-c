#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char str[1001];
    int uppercase = 0, lowercase = 0, special = 0;

    // Input: Read a string from the user
    fgets(str, sizeof(str), stdin);

    // Calculate counts of uppercase, lowercase, and special characters
    for (int i = 0; i < strlen(str); i++) {
        if (isupper(str[i])) {
            uppercase++;
        } else if (islower(str[i])) {
            lowercase++;
        } else if (!isspace(str[i])) { // Exclude spaces from special characters
            special++;
        }
    }

    // Output results
    printf("%d\n", uppercase);
    printf("%d\n", lowercase);
    printf("%d\n", special);

    return 0;
}