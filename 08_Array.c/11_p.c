//rev[n]
//rev[n-i-1]
#include<stdio.h>
int main(){
	int n;
	printf("Enter the array lengthh:\n");
	scanf("%d",&n);
	int arr[n],rev[n];
	printf("Enter your elements:\n");
	int i;
	for(i=0;i<n;i++){
		printf("elements %d:",i+1);
		scanf("%d",&arr[i]);
		rev[n-i-1]=arr[i];
	}
	
	for( i=0;i<n;i++){
		printf("elements %d:\n%d\n",i+1,rev[i]);
	}
}