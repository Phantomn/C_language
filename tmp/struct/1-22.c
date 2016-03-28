#include <stdio.h>

typedef struct point{
	int x;
	int y;
}POINT;
typedef struct student{
	char name[20];
	POINT* link;
}STUDENT;

int main(){
	STUDENT stu1={"one",NULL};
	STUDENT stu2={"two",NULL};
	POINT p1={30,40};
	POINT p2={60,80};


	stu1.link=&p1;
	stu2.link=&p2;


	printf("%s %d %d\n",stu1.name,stu1.link->x, stu1.link->y);
	printf("%s %d %d\n",stu2.name,stu2.link->x, stu2.link->y);


	return 0;
}
