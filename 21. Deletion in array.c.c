#include<stdio.h>

int *deletion(int arr [ ], int n,int ele){
	int i;
	int pos =-1;
	for(i=0;i<n;i++){
		if(arr[i]==ele){
			pos = i;
			break;
		}
	}
	if(pos ==-1){
		return 0;
	}
	else{
		arr[pos]= 0;
		for(i=pos;i<n;i++){
			arr[i] = arr[i]+arr[i+1]-(arr[i+1]=arr[i]);
		}
	}
	arr[n-1] = 0;
	return arr;
	
}


int main(){
	int arr[10] = {10,20,30,40,50,60},i;
	int n = sizeof(arr)/sizeof(arr[0]);
	printf("Given Array-->\n");
	for(i=0;i<n;i++){
			printf("%d ",arr[i]);
	}
	
	int ele;
	printf("\n\nEnter the Element you want to delete ->");
	scanf("%d",&ele);
	int *a = deletion(arr,n,ele);
	if(a!=0){
		for(i=0;i<n;i++){
			printf("%d ",a[i]);
		}	
	}
	else{
		printf("\nNo Such Element in array");
	}
	return 0;
}
