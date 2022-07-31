#include<stdio.h>
int main(){
	int a;
	
	do{
		printf("Enter Size of array--> ");
		scanf("%d",&a);	
		if(a<1){
			printf("\n----Enter number more than 0----\n");
		}
	}while(a<1);
	printf("\nSize of array -->%d\n",a);
	int arr[a];
	
	
	
}
