#include<stdio.h>

int count(int a[]){
    int no_Of_positvenum=0;
    for(int i=1;i<=10;i++){
         if(a[i]>=1){
        no_Of_positvenum++;
     }
    }
   
    return no_Of_positvenum++;
}

int main(){
    int arr[]={0,1,2,3,4,5,6,7,-8,9};
    printf("count of positve number is given as:%d ", count(arr));




    return 0;
}