#include<stdio.h>
int number(int arr[], int n){
	int result =0,i;
	for(i =0;i<n;i++){
		result ^= arr[i];      // XOR operation
	}
	return result;
}

int main(){
	int arr[]= {12,12,14,90,14,14,14};
	int n = sizeof(arr)/sizeof(arr[0]);
	printf("Odd out number is %d",number(arr,n));
	return 0;
}
