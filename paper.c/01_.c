#include <stdio.h>

int main() {
    int a, b, c;

    // Input: Read angles from the user
    scanf("%d %d %d", &a, &b, &c);

    // Check if the triangle is valid
    if (a + b + c == 180 && a > 0 && b > 0 && c > 0) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
