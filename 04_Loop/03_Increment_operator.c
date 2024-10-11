#include<stdio.h>

int main(){
    int i=5;


    printf("The value of i is :%d\n ",i);
    i=i+5;

    printf("now the vlaue of i:%d\n",i);
    i+=2;//same as i=i+2
    //++i;

    printf("now the value i:%d\n",++i);
    //i++ print first then increment(post increment)
    //++i increse first then print(pre increment)



    return 0;
}