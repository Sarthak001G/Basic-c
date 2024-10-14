#include<stdio.h>

int* sum(int a,int b){
    int c=a+b;
    int* ptr1 = &c;
    printf("sum is %d\n", c);
    return ptr1;

}
float* average(int a,int b){
    float vg=(a+b)/2.0;
    float* ptr2 = &vg;
    printf("avrage is %f\n", vg);
    return ptr2;
}

int main(){
    int x=4;
    int y=6;
    int* ptr1;
    float* ptr2;
    ptr1 = sum(x,y);
    ptr2 = average(x,y);



     sum(x,y);
     average(x,y);
     printf("sum  pointer is %u,and average pointer  is %u", ptr1,ptr2);


    return 0;
}