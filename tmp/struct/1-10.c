#include <stdio.h>

typedef struct student{
	char no[10];
	char name[20];
	double math;
	double eng;
	double total;
} STUDENT;

int main(){
	STUDENT stu1={"1","ONE",80,80,0};
	STUDENT stu2={"2","TWO",95,85,0};
	STUDENT stu3={"3","THREE",100,90,0};


	stu1.total=stu1.math+stu1.eng;
	stu2.total=stu2.math+stu2.eng;
	stu3.total=stu3.math+stu3.eng;

	printf("No. : %s, Name : %s\n",stu1.no, stu1.name);
	printf("Total : %lf\n",stu1.total);
	printf("---------------------------------------\n");
	printf("No. : %s, Name : %s\n",stu2.no, stu2.name);
	printf("Total : %lf\n",stu2.total);
	printf("---------------------------------------\n");
	printf("No. : %s, Name : %s\n",stu3.no, stu3.name);
	printf("Total : %lf\n",stu3.total);
	printf("---------------------------------------\n");


	return 0;
}
