#include <stdio.h>

int subtract(int n1, int n2) {
    // Negate n2 using bitwise complement and add 1 to get -n2
    n2 = ~n2 + 1;
    
    // Now, perform the addition of n1 and -n2 using bitwise operations
    while (n2 != 0) {
        // Carry now contains common set bits of n1 and n2
        int carry = n1 & n2;

        // Sum of bits of n1 and n2 where at least one of the bits is not set
        n1 = n1 ^ n2;

        // Carry is shifted by one so that adding it to n1 gives the required sum
        n2 = carry << 1;
    }

    return n1;
}

int main() {
    int n1, n2;
    
    // Input two integers
    scanf("%d %d", &n1, &n2);
    
    // Call subtract function and print the result
    printf("%d\n", subtract(n1, n2));

    return 0;
}
