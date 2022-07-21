#include<stdio.h>
#include<string.h>

int len(char str []){
	int i=0,len =0;
	while(str[i]!='\0'){
		len++;
		i++;
	}
	return len;
}



int cpm(char s1[],char s2[]){
	int l1 = len(s1), l2 = len(s2);
	if(l1 !=l2){
		return 1;
	}
	int i=0;
	while(s1[i] !='\0' && s2[i]!='\0'){
		if(s1[i] != s2[i]){
			return 1;
		}
		i++;	
	}
	return 0;
}


int main(){
	char s1[]= {"Hello"};
	char s2[]= {"Hello"};
	char s3[]= {"Vaibhav"};
	printf("%d\n",cpm(s1,s2));
	printf("%d\n",cpm(s1,s3));
	
}
