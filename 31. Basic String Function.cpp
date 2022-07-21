#include<stdio.h>
#include<string.h>
typedef unsigned long long int li;

//Len by function
int len(char *str){
	int len =0;
	while(*str!='\0'){
		len+=1;
		str++;
	}
	return len;
}

int main(){
	char str[] = {"Hello World"};
	li lenght = strlen(str);
	printf("Lenght of string by strlen function of str '%s' is %d",str,lenght);
	printf("\nLenght of string by len function of str '%s' is %d",str,len(str));
	printf("\nsizeof lengt->%d",sizeof(li));
}
