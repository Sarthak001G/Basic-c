#include <stdio.h>
#include <stdlib.h>

// Recursive function to calculate the nth term
int find_nth_term(int n, int a, int b, int c) {
    // Base cases
    if (n == 1) return a;
    if (n == 2) return b;
    if (n == 3) return c;

    // Recursive case
    return find_nth_term(n - 1, a, b, c) + find_nth_term(n - 2, a, b, c) + find_nth_term(n - 3, a, b, c);
}

int main() {
    int n, a, b, c;
  
    // Input the value of n, a, b, and c
    scanf("%d %d %d %d", &n, &a, &b, &c);

    // Calculate the nth term using the recursive function
    int ans = find_nth_term(n, a, b, c);

    // Print the result
    printf("%d\n", ans);
  
    return 0;
}
