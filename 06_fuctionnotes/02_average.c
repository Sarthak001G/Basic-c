#include<stdio.h>


    float avrage_of_3(int a,int b,int c);


    float avrage_of_3(int a,int b,int c){
        return (a+b+c)/3.0;
    }
int main(){
    int x,y,z;

    printf("Enter three number whose average you want to be printed:\n");
    scanf("%d %d %d",&x,&y,&z );

    printf("Average of number %d, %d,%d is:%f",x,y,z,avrage_of_3(x,y,z));





    return 0;
}