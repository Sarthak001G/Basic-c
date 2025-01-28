#include <stdio.h>

void find_largest_helipad(int t) {
    for (int i = 0; i < t; i++) {
        int n;
        scanf("%d", &n);

        int max_square_size = 0;
        int best_length = 0, best_width = 0;

        for (int j = 0; j < n; j++) {
            int l, w;
            scanf("%d %d", &l, &w);

            int square_size = l < w ? l : w;
            if (square_size > max_square_size) {
                max_square_size = square_size;
                best_length = l;
                best_width = w;
            }
        }
        
        printf("%d %d\n", best_length, best_width);
    }
}

int main() {
    int t;
    scanf("%d", &t);
    find_largest_helipad(t);

    return 0;
}
