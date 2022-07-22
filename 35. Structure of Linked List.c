#include<stdio.h>
#include<stdlib.h>

struct Node{
	int data;
	struct Node *next;
};

int main(){
	
	// Non pointer Node  size 16
	struct Node n1;
	printf("Sizeof -->%d\n",sizeof(n1));
	n1.data = 30;
	n1.next = NULL;
	
	// Pointer node with malloc size 8 + 16
	struct Node *n2 = (struct Node*)malloc(1*sizeof(struct Node));
	n2->data = 20;
	n2->next = NULL;
	printf("Sizeof -->%d\n",sizeof(*n2));
	
	// Pointer Node without malloc 8 + 16;
	struct Node *n3;
	printf("Sizeof -->%d\n",sizeof(*n3));
	n3->data = 40;
	n3->next = NULL;
	
	
	
	printf("\n\n%d %d\n\n",n1.data,n1.next);
	printf("\n\n%d %d\n\n",n2->data,n2->next);
	
	
	
	
	
	
	
}
