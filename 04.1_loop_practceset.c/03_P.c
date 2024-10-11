#include<stdio.h>

int main(){
    int i = 1, n, sum = 0;
    /*printf("Enter the natural number till which the sum of natural numbers is to be printed: ");
    scanf("%d", &n);

    // Check if the input is a valid natural number
    if (n <= 0) {
        printf("Given number is not a natural number.\n");
    } else {
        // Loop to calculate the sum of natural numbers
        while (i <= n) {
            sum += i;
            i++;  // Increment the counter
        }
        // Output the sum
        printf("The sum of the first %d natural numbers is: %d\n", n, sum);
        
        }


        while(i<=10){
            sum +=i;
            i++;

        }
         printf("The sum of the first %d natural numbers is: %d\n", n, sum);*/
         do{
            sum +=i;
            i++;

        }while(i<=10);
         printf("The sum of the first %d natural numbers is: %d\n", n, sum);

    return 0;
}
