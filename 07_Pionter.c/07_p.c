#include<stdio.h>
void change_to_thirty(int *);
void change_to_thirty(int* a){
    *a=*a * 30;
}



int main(){
    int i=2;
    int* ptr=&i;
    printf("address of i is %u", &i);
    printf("\nthe value is:\n%d",*ptr);
    change_to_thirty(&i);
    printf(" change in value = %d",i);

    return 0;
}