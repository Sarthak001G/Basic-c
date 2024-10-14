#include <stdio.h>

// Function that modifies the value of the variable by reference
void modify_by_reference(int *num) {
    *num = 100;  // Dereference the pointer and modify the value
}

int main() {
    int original_value = 10;
    printf("Before modification: %d\n", original_value);

    // Passing the address of original_value to the function
    modify_by_reference(&original_value);

    printf("After modification: %d\n", original_value);

    return 0;
}
