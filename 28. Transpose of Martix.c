#include<stdio.h>
int main(){
	int a[3][3]= {{1,2,10},{4,5,6},{7,8,9}};
	int n = sizeof(a)/sizeof(a[0]);
	int m = sizeof(a[0])/sizeof(a[0][0]);
	int i,j;
	printf("Before Transpose->\n");
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	int t[m][n];
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			t[i][j] = a[j][i];
		}
	}
	printf("After Transpose->\n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%d ",t[i][j]);
		}
		printf("\n");
	}
	
}
