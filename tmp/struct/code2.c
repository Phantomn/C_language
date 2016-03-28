#include <stdio.h>

typedef struct student{
	char no[10];
	char name[20];
	double total;
}STUDENT;

int main(){
	STUDENT** pp=NULL;
	STUDENT* p=NULL;
	STUDENT stu={"20101323","Park",160};

	p=&stu;
	pp=&p;

	printf("%s %s %.2lf\n",stu.no, stu.name, stu.total);
	printf("%s %s %.2lf\n",(*p).no, (*p).name, (*p).total);
	printf("%s %s %.2lf\n",p->no, p->name, p->total);
	printf("%s %s %.2lf\n",(**pp).no, (**pp).name, (**pp).total);
	printf("%s %s %.2lf\n",(*pp)->no, (*pp)->name, (*pp)->total);

	return 0;
}
