
#include <stdio.h>

int main() {
    int a, b, c, d, greatest;

    // Taking input from the user
    printf("Enter four numbers: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    // Start by assuming the first number is the greatest
    greatest = a;

    // Using switch to compare the numbers
    switch (0) {
        case 0:
            if (b > greatest)
                greatest = b;  // update greatest if b is larger
        case 1:
            if (c > greatest)
                greatest = c;  // update greatest if c is larger
        case 2:
            if (d > greatest)
                greatest = d;  // update greatest if d is larger
        default:
            break;
    }

    // Print the result
    printf("The greatest number is: %d\n", greatest);

    return 0;
}
