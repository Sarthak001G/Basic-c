#include<stdio.h>
#include <stdlib.h>  // For rand() and srand()
#include <time.h>    // For time()

int main() {
    // Initialize random number generator
    srand(time(0));  // Use current time as seed for random generator

    // Generate a random number between 1 and 100
    int randomNumber = (rand() % 100) + 1;
    int no_ofgusses=0; 
    int gussedno;

    // Output the random number

    do
    {
         printf("Guess the number");
         scanf("%d", &gussedno);
         no_ofgusses++;
         if (gussedno > randomNumber)
         {
            printf("Enter lower number please\n");
         }else if(gussedno< randomNumber)
         {
            printf("Enter the greater number please\n");
         }else
         {
            printf("congrats\n");
         }
         
         
         
        
    } while (gussedno!=randomNumber);
    printf("You gussed the number in :%d gusses",no_ofgusses);
    
    

    return 0;
}


