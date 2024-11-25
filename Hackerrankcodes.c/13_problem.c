#include <stdio.h>
#include <stdlib.h>

/*
 * Global variables to store the total number of books and the pages in each book.
 */
int* total_number_of_books; // Number of books on each shelf
int** total_number_of_pages; // Pages in each book of each shelf

int main() {
    int total_number_of_shelves;
    scanf("%d", &total_number_of_shelves);

    // Allocate memory for total_number_of_books
    total_number_of_books = (int*)calloc(total_number_of_shelves, sizeof(int));

    // Allocate memory for total_number_of_pages
    total_number_of_pages = (int**)malloc(total_number_of_shelves * sizeof(int*));
    for (int i = 0; i < total_number_of_shelves; i++) {
        total_number_of_pages[i] = NULL; // Initialize to NULL for realloc to work
    }

    int total_number_of_queries;
    scanf("%d", &total_number_of_queries);

    while (total_number_of_queries--) {
        int type_of_query;
        scanf("%d", &type_of_query);

        if (type_of_query == 1) {
            int x, y;
            scanf("%d %d", &x, &y);

            // Increase the number of books on the shelf
            total_number_of_books[x]++;

            // Reallocate memory for the new book on the shelf
            total_number_of_pages[x] = (int*)realloc(total_number_of_pages[x], total_number_of_books[x] * sizeof(int));

            // Add the number of pages for the new book
            total_number_of_pages[x][total_number_of_books[x] - 1] = y;

        } else if (type_of_query == 2) {
            int x, y;
            scanf("%d %d", &x, &y);
            printf("%d\n", total_number_of_pages[x][y]);
        } else {
            int x;
            scanf("%d", &x);
            printf("%d\n", total_number_of_books[x]);
        }
    }

    // Free allocated memory
    free(total_number_of_books);
    for (int i = 0; i < total_number_of_shelves; i++) {
        free(total_number_of_pages[i]);
    }
    free(total_number_of_pages);

    return 0;
}
