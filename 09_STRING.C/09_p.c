#include<stdio.h>
#include<string.h>
//encrypitng

int main(){
    char str[]="Mera naam Amit hai yes sir";
    for (int i = 0; i < strlen(str); i++)
    {
        str[i]=str[i]+1;

    }
    printf("%s",str);    

    return 0;
}