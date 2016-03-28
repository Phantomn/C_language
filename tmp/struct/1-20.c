#include <stdio.h>

typedef struct student{
	char name[20];
	int money;
	struct student* link;
}STUDENT;

int main(){
	STUDENT stu1={"one",10,NULL};
	STUDENT stu2={"two",20,NULL};
	STUDENT stu3={"three",30,NULL};


	stu1.link=&stu2;
	stu2.link=&stu3;

	printf("%s %d\n",stu1.name, stu1.money);
	printf("%s %d\n",stu1.link->name, stu1.link->money);
	printf("%s %d\n",stu1.link->link->name, stu1.link->link->money);


	return 0;
}
