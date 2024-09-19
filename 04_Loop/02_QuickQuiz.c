
#include <stdio.h>

int main(){
    /*
    Quick Quiz: Write a program to print natural numbers from 10 to 20 when initial loop
    counter is initialized to 0.
    */

    int i = 0;
    while(i < 20){  // This loop will run until i is less than 20
        if(i >= 10){
            printf("The value of i is %d\n", i);
        }
        i++;
    }
    printf("done\n");  // Semicolon added, and newline added for clarity
    
    return 0;
}