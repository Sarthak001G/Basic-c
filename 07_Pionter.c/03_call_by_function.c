#include<stdio.h>

int sum(int *, int *);

int sum(int* a, int* b){
    *a =6;
    return (*a+*b);
}//sum function cant change x beause it take copy of x but now we give exact address
int main(){
    int x=1, y=6;
    printf("the sum %d\n",sum(&x,&y));
    printf("%d",x);

    return 0;
}