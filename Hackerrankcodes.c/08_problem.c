#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    char str[1000];
    int freq[10] = {0};  // Array to store the frequency of each digit from 0 to 9

    // Read the input string
    scanf("%s", str);

    // Iterate over each character in the string
    for (int i = 0; i < strlen(str); i++) {
        // Check if the character is a digit
        if (str[i] >= '0' && str[i] <= '9') {
            int digit = str[i] - '0';  // Convert character to integer
            freq[digit]++;  // Increment the frequency of the digit
        }
    }

    // Print the frequency of each digit from 0 to 9
    for (int i = 0; i < 10; i++) {
        printf("%d ", freq[i]);
    }
    printf("\n");

    return 0;
}