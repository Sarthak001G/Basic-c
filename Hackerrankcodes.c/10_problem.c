#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T); // Read number of test cases

    while (T--) {
        int N;
        scanf("%d", &N); // Read number of helipads in the current test case
        
        int max_area = -1;
        int best_L = 0, best_W = 0;

        for (int i = 0; i < N; i++) {
            int L, W;
            scanf("%d %d", &L, &W); // Read dimensions of each helipad

            int area = L * W;
            // Update if this helipad has a larger area
            if (area > max_area) {
                max_area = area;
                best_L = L;
                best_W = W;
            }
        }

        // Print the dimensions of the helipad with the largest area
        printf("%d %d\n", best_L, best_W);
    }

    return 0;
}
