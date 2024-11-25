#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>




int main() {
    char *s;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);  // Read the entire line, including spaces
    s = realloc(s, strlen(s) + 1);  // Resize memory to fit the exact string length

    // Tokenize the sentence by splitting on spaces
    char *word = strtok(s, " ");
    
    // Print each word on a new line
    while (word != NULL) {
        printf("%s\n", word);
        word = strtok(NULL, " ");
    }
    
    free(s);  // Free the allocated memory
    return 0;
}
