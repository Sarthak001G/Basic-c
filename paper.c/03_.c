#include <stdio.h>
#include <limits.h> // For INT_MIN and INT_MAX

int main() {
    int T; // Number of test cases
    printf("Enter number of test cases: ");
    scanf("%d", &T);
    
    while (T--) {
        int N; // Number of elements in the series
        printf("Enter size of the series: ");
        scanf("%d", &N);
        
        int min = INT_MAX, max = INT_MIN, num;
        
        for (int i = 0; i < N; i++) {
            scanf("%d", &num);
            if (num < min) min = num;
            if (num > max) max = num;
        }
        
        // Print the result for the current test case
        printf("%d %d\n", min, max);
    }
    
    return 0;
}
