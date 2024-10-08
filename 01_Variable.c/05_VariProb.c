/*#include<stdio.h> 

int main(){
    int r,h;

    printf("Enter the radius of cylinder:\n");
    scanf("%d", &r);

    printf("Enter the height of cylinder:\n");
    scanf("%d", &h);

    printf("The Volume of circle radius %d , height %d is %f",r,h,3.14*r*r*h);
    

    return 0;
}*/
#include <stdio.h>

int main(){
    int r, h;

    printf("Enter the radius of the cylinder:\n");
    scanf("%d", &r);

    printf("Enter the height of the cylinder:\n");
    scanf("%d", &h);

    printf("The Volume of cylinder with radius %d and height %d is %f\n", r, h, 3.14 * r * r * h);

    return 0;
}

