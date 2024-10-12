#include<stdio.h> 
/*recursion: 
     Recursion is a programming technique where a function calls itself in order to solve a problem. The function keeps calling 
     itself with smaller or simpler inputs until it reaches a base case, which is a condition that stops the recursion.

Key elements of recursion:

Base Case: The simplest instance of the problem, where the solution is known directly. It prevents the function from calling itself indefinitely.
Recursive Case: The part where the function calls itself with a modified (usually reduced) version of the original problem.
Recursion is often used to solve problems that can be broken down into smaller, similar subproblems, like calculating the factorial of a number,
 traversing tree structures, or performing tasks like sorting.*/


    int factorial(int);

    int factorial(int n){
        if(n ==0 || n ==1){
            return 1;
        }
        return factorial(n-1)*n;

    }
    



int main(){
    int a=12;
    printf("%d factorail is : %d",a, factorial(a));

    return 0;
}
    
