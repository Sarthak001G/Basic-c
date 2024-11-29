
#include <stdio.h>

void slice(char str[], int m, int n) {
    int i = 0;
    
    // Shift characters from index m to the start of the string
    for (i = 0; i < n - m; i++) {
        str[i] = str[m + i];
    }

    // Add null terminator to end the sliced string
    str[i] = '\0';
}

int main() {
    char str[] = "Harry bhai";
    slice(str, 1, 5);
    printf("%s", str);  // Expected output: "arry"
    
    return 0;
}
/*#include<stdio.h>
char* slice(char str[],int m,int n){
    int i=0,count;
    char *ptr1 = &str[m];
    char *ptr2 = &str[n];

    str = ptr1;
    str[n] = '\0';
    return str;
}

int main(){
    char str[] = "Harry bhai";
    printf("%s",slice(str,1,5 ));
    

    return 0;
}*/