#include<stdio.h>
#include<string.h>
struct student{
	int roll;
	char name[30];
	float marks;
}; 

typedef struct student s;

int main(){
	s s1[3];
	int i;
	int roll;
	float marks;
	char c[30];
	for(i=0;i<3;i++){
		printf("Enter Roll Number-->");
		scanf("%d",&s1[i].roll);
		printf("Enter Name -->");
		fflush(stdin);
		strcpy(s1[i].name,gets(c));
		printf("Enter Marks -->");
		scanf("%f",&s1[i].marks);
	}
	
	for(i=0;i<3;i++)
	printf("Roll Number -> %d\nName -> %s\nMarks -> %f\n\n",s1[i].roll,s1[i].name,s1[i].marks);
}
