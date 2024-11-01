#include<stdio.h>
#include<string.h>

int main(){
    char st[]="Harry";
    char str1[30];

    printf("%d",strlen(st));
    strcpy(str1,st);
    printf("%s\n",str1);
    strcat(str1,st);
    printf("%s\n",str1);
    int a =strcmp("far","joke");//dj is negative
    printf("%d",a);

/*fflush(stdin) in string covert input taken as 
h
y
and print 
hy */
    return 0;
}