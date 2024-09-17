#include<stdio.h> 

int main(){
    int marks1,marks2,marks3;
    printf("Enter mark 1:\n");
    scanf("%d", &marks1);
    printf("Enter mark 2:\n");
    scanf("%d", &marks2);
    printf("Enter mark 3:\n");
    scanf("%d", &marks3);
    if(marks1<=33 || marks2<=33 || marks3<=33){
        printf("You failed the exam in individual subject");
    }
    else if((marks1+marks3+marks2)/3<40){
        printf("you failed the exam due to your total percent is less than 40");
    }
    else{
        printf("You passed the exam");
    }
    
    return 0;
}