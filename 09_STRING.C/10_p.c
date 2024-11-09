#include<stdio.h>
#include<string.h>
//dencrypitng

int main(){
    char str[]="Nfsb!obbn!Bnju!ibj";
    int count=0;
    for (int i = 0; i < strlen(str); i++)
    {
        str[i]=str[i]-1;

    }
    printf("%s",str);    

    return 0;
}