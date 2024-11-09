#include <stdio.h>
#include <stdlib.h> // For the abs() function

void update(int *a, int *b) {
    int sum = *a + *b;
    int difference = abs(*a - *b); // Absolute difference

    *a = sum;
    *b = difference;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    // Read two integers
    scanf("%d %d", &a, &b);
    
    // Call update function
    update(pa, pb);
    
    // Print modified values of a and b
    printf("%d\n%d", a, b);

    return 0;
}
