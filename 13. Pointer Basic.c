#include<stdio.h>
int main(){
	int *a ;                            //a is a pointer variable which store the integer value
	int b =10;
	a = &b;
	printf("%d---->%d",*a,b);
	printf("\n%d---->%d",a,&b);	
}
