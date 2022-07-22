#include<stdio.h>

struct Node{
	int data;
	struct Node *next;
};

//typedef struct Node Node;

int main(){
	struct Node *n1,*n2,*n3;
	n1 = (struct Node *)malloc(sizeof(struct Node));
	n2 = (struct Node *)malloc(sizeof(struct Node));
	n3 = (struct Node *)malloc(sizeof(struct Node));
	n1->data = 20;
	n1->next = n2;
	n2->data =40;
	n2->next = n3;
	n3->data = 60;
	n3->next = NULL;

	while(n1 != NULL){
		printf("%d->",n1->data);
		n1 = n1->next;
	}
}
