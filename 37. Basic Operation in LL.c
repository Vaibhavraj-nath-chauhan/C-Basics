#include<stdio.h>
#include <stdlib.h>

struct node{
	int data ;
	struct node *next ;
};

struct node* push(struct node *headRef,int data){
	struct node *newNode = (struct node*)malloc(sizeof(struct node));
	newNode->next = headRef;
	newNode->data = data;
	return newNode;
}


struct node* append(struct node *headRef,int data){
	struct node *newNode = (struct node*)malloc(sizeof(struct node));
	newNode->data= data;
	newNode->next = NULL;
	struct node *parse = headRef;
	while(parse->next !=NULL){
		parse = parse->next;
	}
	parse->next = newNode;
	return headRef;
}

struct node* insterat(struct node *headRef,int data,int loc){
	struct node *newNode = (struct node*)malloc(sizeof(struct node));
	newNode->data =data;
	if(loc==1){
		newNode->next = headRef;
		return newNode;
	}
	struct node *parse = headRef;
	int i;
	
	for(i=0;i<loc-2;i++){
		parse = parse->next;
		if(parse==NULL){
			printf("No location");
			break;
		}
	}
	newNode->next = parse->next;
	parse->next = newNode;
	return headRef;
}

struct node *del(struct node *head,int data){
	struct node *temp = (struct node*)malloc(sizeof(struct node));
	struct node *trav = head;
	while(trav->next !=NULL){
		if(trav->next->data==data){
			temp = trav->next;

			break;
		}
		trav = trav->next;
	}
	trav->next = temp->next;
	temp->next = NULL;
	free(temp);
	return head;
}



void travel(struct node *t){
	while(t!=NULL){
		printf("%d ",t->data);
		t= t->next;
	}
}


int main(){

	struct node *head = NULL;
	head = push(head,40);
	head = push(head,4);
	head = push(head,41);
	head = push(head,42);
	head = push(head,43);
	head = push(head,24);
	head = append(head,60);
	head = insterat(head,30,2);
	head = del(head,60);
	travel(head);

}
