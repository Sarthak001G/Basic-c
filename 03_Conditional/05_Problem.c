#include<stdio.h> 

int main(){
    char ch;
    printf("Enter the character:");
    scanf("%c", &ch);
    if(ch>=97 && ch<=122){
        printf("The character is lower case %d",ch);
    }
    else{
        printf("The character is upper case:%d", ch);
    }
    return 0;
}
/*#include <stdio.h>

int main() {
    char ch;
    printf("Enter the character: ");
    scanf("%c", &ch);  // Use %c to scan a character

    if (ch >= 97 && ch <= 122) {  // Check if it's a lowercase letter
        printf("The character is lowercase. ASCII value: %d\n", ch);  // Print ASCII value using %d
    } else {
        printf("The character is uppercase or non-lowercase. ASCII value: %d\n", ch);
    }

    return 0;
}
*/