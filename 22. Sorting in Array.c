#include<stdio.h>
int *sort(int arr [],int n){
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<n-i-1;j++){
			
			if(arr[j]>arr[j+1]){
			
			arr[j] = arr[j]+arr[j+1] -(arr[j+1]=arr[j]);
			}
		}
	}
	return arr;
}
int main(){
	int arr[] = {11,21,9,7,4,21,100,64,30};
	int i, n = sizeof(arr)/sizeof(arr[0]);
	printf("Given Array ->\n");
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	printf("\nSorted Array ->\n");
	int *a = sort(arr,n);
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	return 0;
	
}
