#include<stdio.h>
int main(){
	int a=10,b=20;
	int *const ptr = &a;
	printf("%d\n",*ptr);
	//prt = &b; //Error , we cant have the new address of pointer we can chnage the value bit not the address
	*ptr = 20;
	printf("%d\n",*ptr);
}
