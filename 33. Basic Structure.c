#include<stdio.h>
#include<string.h>
struct student{
	int roll;
	char name[30];
	float marks;
}; 

typedef struct student s;

int main(){
	s s1;
	//s s1 = {80,"Vaibhavraj Nath Chauhan",83.20};       //No Error        //method 1
	strcpy(s1.name,"Vaibhavraj Nath Chauhan");							   //Method 2
	//s1.name = "Vaibhavraj nath Chauhan";               //Error
	
	
	s1.roll = 80;
	s1.marks = 83.20;
	
	printf("Roll Number -> %d\nName -> %s\nMarks -> %f",s1.roll,s1.name,s1.marks);
}
