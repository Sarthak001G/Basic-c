#include<stdio.h>
#include<string.h>
//count

int main(){
    char str[]="Nfsb!obbn!Bnju!ibj";
    char n;
    printf("enter a char ");
    scanf("%c", &n);
    int count=0;
    for (int i = 0; i < strlen(str); i++)
    {
        if(str[i] == n){
            ++count;
        }

    }
    printf("%d",count);    

    return 0;
}