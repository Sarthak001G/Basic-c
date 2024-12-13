#include <stdio.h>

int main() {
    int T; // Number of test cases
    scanf("%d", &T);
    
    while (T--) {
        long long A, B, C;
        
        // Read values for A, B, C
        scanf("%lld %lld %lld", &A, &B, &C);
        
        // Calculate the price of C apples
        long long price = (B * C) / A;
        
        // Print the result
        printf("%lld\n", price);
    }
    
    return 0;
}
