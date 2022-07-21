#include<stdio.h>
#include <stdlib.h>
int main(){
	int *array = (int*)malloc(10*sizeof(int));
	array[0]= 10;
	array[1] =20;
	printf("%d",*array);
	return 0;
}
