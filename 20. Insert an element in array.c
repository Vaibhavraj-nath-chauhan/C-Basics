#include<stdio.h>

int *insert(int arr[],int n , int ele, int pos){
	int i;
	for(i=n-1;i>pos-1;i--){
		arr[i] = arr[i] + arr[i-1]-(arr[i-1]= arr[i]);
	}
	arr[pos-1] = ele;
	return arr;
}

int main(){
	int arr[10] = {10,20,30,40,50,60},i;
	int n = sizeof(arr)/sizeof(arr[0]);
	int ele,pos;
	printf("Enter the Element you want to store ->");
	scanf("%d",&ele);
	printf("Enter the position for the element->");
	scanf("%d",&pos);
	if(pos>n){
		printf("Index out of range, Size of array %d and Poition you entered %d",n,pos);
	}
	else{
		int *a = insert(arr,n,ele,pos);
		for(i=0;i<n;i++){
			printf("%d ",a[i]);
		}
	}
	return 0;
}
