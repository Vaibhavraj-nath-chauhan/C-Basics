#include<stdio.h>

int duplication(int arr [],int n){
	int i,j=0;
	int temp[n];
	for(i=0;i<n-1;i++){
		if(arr[i]!=arr[i+1]){
			temp[j++] = arr[i];
		}
	}
	temp[j++]= arr[n-1];
	for (i = 0; i < j; i++)  
    {  
        arr[i] = temp[i];  
        }    
	printf("\n",temp[i]);
	return j;
}

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
	int arr[] = {10,20,30,40,50,10,20,30,40,50};
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
	printf("\nDeletion of duplicate element ->\n");
	int j = duplication(a,n);
	for(i=0;i<j;i++){
		printf("%d ",arr[i]);
	}
	return 0;
	
}
