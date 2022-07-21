#include<stdio.h>
int main(){
	const int *ptr;
	int a=10,b=20;
	ptr = &a;
	printf("%d\n",*ptr);
	
	//*prt = 20; Error , we cant have the value of pointer directly with the constant 
	ptr = &b;
	printf("%d\n",*ptr);
}
