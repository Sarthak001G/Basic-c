#include<stdio.h>

int main(){
    int a =3;
    printf("%d %d %d \n", a, ++a, a++);
    //evaluation order is different answeer both are correct(6,6,4)and (4,5,5)

    return 0;
}