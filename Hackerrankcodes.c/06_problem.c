#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i, sum = 0;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
        sum += *(arr + i);  // Add each element to sum
    }

    /* Logic to reverse the array */
    for(i = 0; i < num / 2; i++) {
        int temp = *(arr + i);
        *(arr + i) = *(arr + num - i - 1);
        *(arr + num - i - 1) = temp;
    }

    for(i = 0; i < num; i++) {
        printf("%d ", *(arr + i));
    }
    
    printf("\nSum: %d\n", sum);  // Print the sum of elements

    free(arr); // Free the allocated memory
    return 0;
}

