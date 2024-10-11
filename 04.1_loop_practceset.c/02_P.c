#include<stdio.h>

int main(){
    int n;
    printf("Enter the number whose table you want to be printed in reverse order:\n");
    scanf("%d",&n);
    for (int i = 10; i >0; i--)
    {
        printf("%d X %d = %d\n",n, i,n*i);
    }
    

    return 0;
}