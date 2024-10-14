#include<stdio.h>

int main(){
    int a=5;
    int* ptr =&a;
    int** ptr1 =&ptr;

    printf("the address is \n=%u",&a);
    printf("\nthe value of ptr\n=%d",*ptr);
    printf("\nthe value of ptr1 is\n=%d",**ptr1);


    return 0;
}