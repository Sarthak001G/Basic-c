#include<stdio.h>

int main(){
    int count=7;
    for (int i = 0; i < count; i++)
    {
        if (i==5)
        {
           // break;it exit's the loop

           continue;//it skips the iteration
        }
        
        printf("The value of i is:%d\n",i);
    }
    printf("The loop is done");

    return 0;
}