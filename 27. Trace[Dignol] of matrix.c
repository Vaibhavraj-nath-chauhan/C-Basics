#include<stdio.h>
int main(){
	int a[3][3]= {{1,2,10},{4,5,6},{7,8,9}};
	int i,j=3,sum=0,s2=0;
	for(i =0;i<3;i++){
				sum += a[i][i];
				s2+= a[j-1][i];
				j-=1;			
	}
	printf("Sum of diagnol is -> %d %d",sum,s2);
	
}
