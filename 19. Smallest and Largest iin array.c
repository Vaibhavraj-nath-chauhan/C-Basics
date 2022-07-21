#include<stdio.h>
int main(){
	int arr[] = {31,23,66,43,56,74,20,9};
	int large = -9999;
	int small = 9999;
	int i;
	int n= sizeof(arr)/sizeof(arr[0]);
	for(i=0;i<n;i++){
		if(arr[i]>large){
			large = arr[i];
		}
		if(arr[i]<small){
			small = arr[i];
		}
	}
	printf("Smallet ->%d\nLargest ->%d",small,large);
}
