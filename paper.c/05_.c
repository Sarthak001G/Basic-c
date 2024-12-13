#include <stdio.h>

int digital_root(int n) {
    while (n >= 10) {
        int sum = 0;
        while (n > 0) {
            sum += n % 10;
            n /= 10;
        }
        n = sum;
    }
    return n;
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    
    int result = digital_root(n);
    printf("The digital root is: %d\n", result);
    
    return 0;
}
