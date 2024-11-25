#include<stdio.h>
int multiply(int);
int multiply(int a){
	
    return (a*2);
}


int main(){
    int i=2;
    int* ptr=&i;
    printf("Address of i is %u", &i);
    printf("\nthe value is:\n%d",*ptr);
    printf("\nthe value of i*2 is %d",multiply(i));
    *ptr=i*3;
    printf("\nThe value is:\n%d",*ptr);


    return 0;
}
