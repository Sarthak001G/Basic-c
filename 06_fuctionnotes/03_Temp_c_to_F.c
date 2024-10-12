#include<stdio.h>
float Temp_conversion(float a);


float Temp_conversion(float a)
{

    return ((9*a)/5)+32 ;
}
int main(){
    int c=100;
    printf("after conversion value is:\n%f F",Temp_conversion(c));

    return 0;
}