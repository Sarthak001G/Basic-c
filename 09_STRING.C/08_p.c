#include <stdio.h>

void mystrcpy(char target[], char source[]) {

    int n=10,i = 0;
    while (source[i] != '\0') {
        target[n-i-1] = source[i];
        i++;
    }
    target[i] = '\0';  // Null-terminate the target string
}

int main() {
    char str[] = "Harry bhai";
    char str1[30];
    mystrcpy(str1, str);
    printf("%s %s", str1, str);

    return 0;
}
