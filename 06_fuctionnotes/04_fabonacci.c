#include<stdio.h>

int fabonacci(int);

int fabonacci(int n){
    if(n == 1 || n==2){
        return n-1;
    }
    return fabonacci(n-1)+fabonacci(n-2);

}


int main(){
    int n=9;
    printf("The value of fabonacci series at %d is %d", n, fabonacci(n));


    return 0;
}