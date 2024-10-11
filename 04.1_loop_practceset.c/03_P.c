#include<stdio.h>

int main(){
    int i=1,n,sum=0;
    printf(" enter the natural number till which the sum of natural number to be printed:");
    scanf("%d",&n);
    if(n<=0){
        printf("Given number is not natural number");
    }else{
        while (i<n)
        {
            sum+=i;
        }
        i++;

        
    }
    printf("sum of %d natural number is;%d ",n,sum);

    return 0;
}