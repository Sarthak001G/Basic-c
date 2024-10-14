#include<stdio.h>

int main(){
    int marks[5];
    printf("enter marks of 5 students\n");
    for (int i = 0; i < 5; i++)
    {
         printf("marks of i%d: \n",i+1 );

        scanf("\n %d", &marks[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("marks of i %d: \n %d\n",i+1, marks[i]);
    }
    

    return 0;
}