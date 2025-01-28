#include <stdio.h>
#include <stdbool.h>

bool is_lucky_number(int n) {
    bool has_three = false;
    bool has_nine = false;
    
    while (n > 0) {
        int digit = n % 10;
        if (digit == 3) {
            has_three = true;
        } else if (digit == 9) {
            has_nine = true;
        }
        n /= 10;
    }
    
    return has_three && has_nine;
}

int main() {
    int n;
    
    // Read the number from the user
    printf("Enter a number: ");
    scanf("%d", &n);
    
    // Check if the number is a lucky number
    if (is_lucky_number(n)) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }
    
    return 0;
}
