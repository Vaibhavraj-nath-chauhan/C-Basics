#include<stdio.h>

int arr[10] ={0};

int push(int);
int pop();
int isFull();
int isEmpty();
int sizek();
int count();
int peak(int);
int change(int ,int);
void display();

int main(){
	// Push
	push(10);
	push(20);
	push(30);
	push(40);
	// Print
	display();
	// update
	change(2,90);
	display();
	// Count
	count();
	pop();
	pop();
	display();
	count();
	display();
	peak(3);
	
}
// Return size of array
int sizek(){
	return sizeof(arr)/sizeof(arr[0]);
}

// Return the status of array

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


// Appending the element
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

//Removing the element
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


// Counting the number if elements
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
	printf("Count is -->%d\n",sum);
	return sum;
}

// Element at given location
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


// Updating the given postion
int change(int pos,int item){
	if(isEmpty()){
		printf("\nArray UnderFlow\n");
		return 0;
	}
	arr[pos-1]=item;
}

// Printing the array
void display(){
	int size = sizek();
	int i;
	for(i=0;i<size;i++){
		if(arr[i]==0) break;
		printf("%d ",arr[i]);
	}
	printf("\n");
	
}


