#include<stdio.h>
#include <stdlib.h>
int main(){
	int *array = (int*)calloc(10,sizeof(int));
	array[0]= 10;
	printf("%d",*array);
	return 0;
}
