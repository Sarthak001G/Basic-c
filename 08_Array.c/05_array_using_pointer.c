#include<stdio.h>

int main(){
    int marks[]={12,34,54,67};
    //int* ptr = &marks[0];
    int* ptr = marks;//same as int* ptr = &marks[0]; // &marks[0] = marks
    // printf("%d\n", ptr+1);
    // printf("%d", *(ptr+1));
    //c helps there develpoer
    for (int i = 0; i < 4; i++)
    {
        
        
        printf("The marks at index=\n %d is\n %d\n",i+1,marks[i]);
        printf("2nd way=\n %d is\n %d\n",i+1,*ptr);
        printf("Address=\n %d is\n %d\n",i+1,ptr);
        
        ptr++; // ptr = ptr+1
    }
    

    return 0;
}