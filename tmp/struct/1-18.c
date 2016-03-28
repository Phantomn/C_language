#include <stdio.h>

typedef struct student{
	char no[10];
	char name[20];
	double total;
}STUDENT;

int main(){

	STUDENT stu={"1","one",160};
	STUDENT* p=NULL;

	p=&stu;
	printf("%s %s %lf\n",stu.no, stu.name, stu.total);
	printf("%s %s %lf\n",(*p).no, (*p).name, (*p).total);
	printf("%s %s %lf\n",p->no, p->name, p->total);

	return 0;
}
