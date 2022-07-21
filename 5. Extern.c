#include<stdio.h>

int main(){
	extern int a;
 	printf("Value of extern a -> %d\n",a);
}
int a =20;


