#include<stdio.h>
int main(){
	unsigned char c =255;
	unsigned char d= -1; //-1 is converted into 32 bit intiger vale from that 8 bits are taken from last as char take only 8 bit, now we have unsigned char to it will consider all bits
	                     //as magnitude and convert whole number to int from wihout any sign so it will beomce 255 in last 
	if(c < 0)  
	 	printf("C is less than 0 \n");
	else    
	 	printf("C is not less than 0\n");
	if(d < 0)
	   	printf("d is less than 0 \n");
	else    
	 	printf("d is not less than 0\n");       
}

