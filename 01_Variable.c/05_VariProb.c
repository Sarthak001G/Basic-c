#include<stdio.h> 

int main(){
    int r,h;

    printf("Enter the radius of cylinder:\n");
    scanf("%d", &r);

    printf("Enter the height of cylinder:\n");
    scanf("%d", &h);

    printf("The Volume of circle radius %d , height %d is %f",r,h,3.14*r*r*h);
    

    return 0;
}