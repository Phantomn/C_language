#include <stdio.h>

typedef struct student{
	char name[20];
	int money;
	struct student* left_link;
	struct student* right_link;
}STUDENT;

int main(){
	STUDENT stu1={"one",10,NULL};
	STUDENT stu2={"two",20,NULL};
	STUDENT stu3={"three",30,NULL};


	stu1.left_link=&stu2;
	stu1.right_link=&stu3;

	printf("%s %d\n",stu1.name, stu1.money);
	printf("%s %d\n",stu1.left_link->name, stu1.left_link->money);
	printf("%s %d\n",stu1.right_link->name, stu1.right_link->money);


	return 0;
}
