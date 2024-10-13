#include<stdio.h>

int main(){
    int i=6;
    int* j=&i;
    int**k = &j;
    printf("%d\n",**(&j));

    return 0;
}