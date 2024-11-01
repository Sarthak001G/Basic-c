#include<stdio.h>

int main(){
    char st[3];
    char st1[]={'a','b','c','\0'};
    printf("Enter for value in st");
    for (int i = 0; i <3; i++)
    {
        scanf("%c",&st[i]);
    }
    for (int i = 0; i <=3; i++)
    {
        printf("\nvlaue of st are\n %c",st[i]);
    }
    for (int i = 0; i <=3; i++)
    {
        printf("\nvlaue of st1 are\n %c",st1[i]);
    }

    
    return 0;
}