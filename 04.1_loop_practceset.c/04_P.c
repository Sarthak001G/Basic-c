#include<stdio.h>

int main(){
    int sum=0;
    for(int i=1;i<=10;i++){
        sum +=(8*i);
    }
    printf("sum of all natural number after multipling 8 is:%d\n",sum);

    return 0;
}