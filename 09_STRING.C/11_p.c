#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Nfsb!obbn!Bnju!ibj";
    char n;
    printf("Enter a character: ");
    scanf(" %c", &n);  // Use %c for a single character input
    
    int count = 0;
    int length = strlen(str); // Calculate length once
    for (int i = 0; i < length; i++) {
        if (str[i] == n) {
            ++count;
        }
    }
    printf("The character '%c' appears %d times.\n", n, count);

    return 0;
}
