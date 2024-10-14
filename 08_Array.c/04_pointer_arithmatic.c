#include<stdio.h>

int main(){
    int a=5;
    int* ptr=&a;
    printf("adress of a\n: %u", &a);
    printf("adress of a\n: %u", ptr);
    ptr++;
    printf("adress of a\n: %u", ptr);//addres value will increse as per data type is used
    //like here int take 4byte
    


    return 0;
}