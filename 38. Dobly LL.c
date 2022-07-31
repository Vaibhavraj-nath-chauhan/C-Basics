#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *next;
	struct node *prev;
};


void push(struct node **headRef,int data){
	 struct node *newNode = (struct node*)malloc(sizeof(struct node));
	 newNode->data = data;
	 //newNode->prev = ;
	 newNode->prev = NULL;
	 newNode->next = *headRef;
	 if(*headRef!=NULL){
	 	(*headRef)->prev = newNode;
	 }
	 *headRef = newNode;
}

void traverse(struct node *head){
	struct node *n = head;
	while(n !=NULL){
		printf("%d ",n->data);
		n = n->next;
	}
}

void del(struct node *head,int data){
	struct node *tra = head;
	while(tra->next!=NULL){
		if(tra->next->next->data==data){
			struct node *temp= tra->next;
		}
		tra = tra->next;
	}
	tra->prev = temp->;
	
}


int main(){
	struct node *head=NULL;
	push(&head,20);
	push(&head,40);
	push(&head,60);
	push(&head,80);
	traverse(head);
	
	
	
		
}
