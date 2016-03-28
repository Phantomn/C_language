#include <stdio.h>

typedef struct student{
	char no[10];
	char name[20];
	double math;
	double eng;
	double total;
} STUDENT;

int main(){
	int i;
	STUDENT stu[3]={
		{"1","ONE",80,80,0},
		{"2","TWO",95,85,0},
		{"3","THREE",100,90,0}
	};

	for(i=0;i<3;i++){
		stu[i].total=stu[i].math+stu[i].eng;
		printf("No. : %s, Name : %s\n",stu[i].no, stu[i].name);
		printf("Total : %lf\n",stu[i].total);
		printf("---------------------------------------\n");
	}

	return 0;
}
