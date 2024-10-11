#include<stdio.h>

int main(){
    int a, b, c;
    printf("Enter the numbers on which the operation is to be performed (space-separated):\n");

    // Correct format string for space-separated integers
    scanf("%d %d %d", &a, &b, &c);

    // Perform the multiplication and print the result
    printf("The value after the first operation is %d\n", c * b);
    printf("the value of 2nd operation is :%d\n",a/b*c*(a));

    return 0;
}
