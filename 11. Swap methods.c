#include<stdio.h>
typedef int i;
int main(){
	
	// Swap with 3 variables -->
	printf("Swap with 3 variables -->\n");
	i a =2;
	i b =3;
	i temp;
	printf("Before Swap\nA->%d\nB->%d",a,b);
	temp =a;
	a = b;
	b = temp;
	printf("\nAfter Swap\nA->%d\nB->%d\n",a,b);
	
	
	
	// Swar with 2 variables only -->
	printf("\nSwap with 2 variables [Method 1]-->\n");
	a =2 ,b=5;
	printf("Before Swap\nA->%d\nB->%d",a,b);
	a = a+b;
	b = a-b;
	a= a-b;
	printf("\nAfter Swap\nA->%d\nB->%d\n",a,b);
	
	printf("\nSwap with 2 variables [Method 2]-->\n");
	a =2 ,b=5;
	printf("Before Swap\nA->%d\nB->%d",a,b);
	a = a^b;
	b = a^b;
	a= a^b;
	printf("\nAfter Swap\nA->%d\nB->%d\n",a,b);
	
	// Swap with one line statement; 
	printf("\nSwap with one statement variables [Method 1]-->\n");
	a =2 ,b=5;
	printf("Before Swap\nA->%d\nB->%d",a,b);
	a = (a*b)/(b=a);
	printf("\nAfter Swap\nA->%d\nB->%d\n",a,b);
	
	printf("\nSwap with one statement variables [Method 2]-->\n");
	a =2 ,b=5;
	printf("Before Swap\nA->%d\nB->%d",a,b);
	a = (a+b)-(b=a);
	printf("\nAfter Swap\nA->%d\nB->%d\n",a,b);
	
	
	printf("%d",)
	
 	
}



