#include<stdio.h>

int main(){
    int a[] = {1,2,3,4,5,6,7,8};
    int *ptr = a;

    printf("value of address %u is %d ; ",ptr+3,*(ptr+3));

    return 0;
}