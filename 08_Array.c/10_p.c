
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number whode table u want to be printed\n:");
    scanf("%d", &n);
    int a[10];
    for (int i = 0; i < 10; i++)
    {
        a[i] = n*(i+1);

    }
    for (int i = 9; i >=0; i--)
    {
        printf("The value of %d X %d is = %d\n",n,i+1,a[i]);
    }
    
    

    return 0;
}