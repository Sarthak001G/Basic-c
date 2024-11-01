#include<stdio.h>

int main(){
    char a[]="abcd";
    char b[5];
    char c[5];
    scanf("%s",&c);
    gets(b);
    for (int i = 0; i < 5; i++)
    {
        printf("%c",a[i]);
    }
    
    

    
    puts(b);
    
    puts(c);

    return 0;
}