#include<stdio.h>
void swap(int* a, int* b);

void swap(int* a, int* b){
    int temp;
    temp =*a;
    *a=*b;
    *b=temp;
}

int main(){
    int a=4,b=6;
    printf("value \n%d,%d",a,b);
    swap(&a,&b);
    printf("\nvalue \n%d,%d",a,b);

    return 0;
}