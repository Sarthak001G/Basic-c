#include<stdio.h>

int main(){
    int i=2;
    int* ptr=&i;
    printf("address of i is %u", &i);
    printf("\nthe value is:\n%d",*ptr);


    return 0;
}