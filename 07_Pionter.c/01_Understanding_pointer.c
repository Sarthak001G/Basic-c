#include<stdio.h>

int main(){
    int i=72;
    int* j= &i;//j is a pointer
    printf("%p\n",&i);
    printf("%p\n",j);
    printf("%d\n",*j);
    printf("%d\n",*(&i));
    printf("%d\n",i);
    printf("%p\n",(&j));//adress of address
    




    return 0;
}