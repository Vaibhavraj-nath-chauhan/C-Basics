#include<stdio.h>

int arr[10] ={0};

int sizek();
int push(int);
int pop();
int isFull();
int count();
int peak(int);
void display();

int main(){
	
	push(10);
	push(20);
	push(30);
	push(40);
	display();
	count();
	pop();
	pop();
	display();
	count();
	display();
	peak(3);
	
}

int sizek(){
	return sizeof(arr)/sizeof(arr[0]);
}
int isFull(){
	int size = sizek();
	if(arr[size-1] !=0){
		return 1;
	}
	return 0;
}
int isEmpty(){
	if(arr[0]==0){
		return 1;
	}
	return 0;
}

int push(int a){
	if(isFull()){
		printf("\nArray Overflow\n");
		return 0;
	}
	int size = sizek();
	int i;
	for(i=0;i<size;i++){
		if(arr[i]==0){
			arr[i]=a;
			break;
		}
	}
	
}

int pop(){
	if(isEmpty()){
		printf("\nArray UnderFlow\n");
		return 0;
	}
	int size = sizek();
	int i;
	for(i=0;i<size;i++){
		if(arr[i]==0){
			break;
		}
	}
	int t = arr[i-1];
	arr[i-1]=0;
	return t;
}

int count(){
	if(isEmpty()){
		printf("\nArray UnderFlow\n");
		return 0;
	}
	int size = sizek();
	int i,sum =0;
	for(i=0;i<size;i++){
		if(arr[i]!=0){
			sum+=1;
		}
		else{
			break;
		}
	}
	printf("Count is -->%d\n\n",sum);
	return sum;
}

int peak(int pos){
	if(isEmpty()){
		printf("\nArray UnderFlow\n");
		return 0;
	}
	pos = arr[pos-1];
	if(pos ==0){
		printf("\nNo data\n");
	}
	else printf("\n%d\n",pos);
	return pos;
}


void display(){
	int size = sizek();
	int i;
	for(i=0;i<size;i++){
		if(arr[i]==0) break;
		printf("%d ",arr[i]);
	}
	printf("\n");
	
}


