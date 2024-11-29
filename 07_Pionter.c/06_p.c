#include<stdio.h>

// Function declarations
int multiply(int);
int multiplyptr(int*);

// Function definitions
int multiply(int a) {
    return (a * 2);
}

int multiplyptr(int* a) {
    return (*a * 4);
}

int main() {
    int i = 2;
    int* ptr = &i;

    printf("Address of i is: %p", (void*)&i);
    printf("\nValue of i using pointer: %d", *ptr);

    printf("\nThe value of i * 2 is: %d", multiply(i));
    printf("\nThe value of i * 4 (using pointer): %d", multiplyptr(ptr)); // Pass ptr

    *ptr = i * 3;
    printf("\nThe value of i after i * 3 (modified via pointer): %d\n", *ptr);

    return 0;
}
