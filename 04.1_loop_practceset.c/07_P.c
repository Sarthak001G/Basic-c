#include<stdio.h>

int main() {
    int n = 10, prime = 1; 

    
    if (n <= 1) {
        prime = 0;
    } else {
        int i = 2;
        
        while( i < n) {
            if (n % i == 0) {
                prime = 0;  
                break;
            }
            i++;
        }
    }


    if (prime == 1) {
        printf("%d is a prime number.\n", n);
    } else {
        printf("%d is not a prime number.\n", n);
    }

    return 0;
}


