#include <stdio.h>

typedef struct student{
	char no[10];
	char name[20];
	double total;
}STUDENT;

int main(){
	STUDENT stu[3];
	int i;
	for(i=0;i<3;i++){
		printf("no name total : ");
		scanf("%s %s %lf", stu[i].no, stu[i].name, &stu[i].total);
	}
	printf("\n");

	printf("Print Info. \n");
	for(i=0;i<3;i++){
		printf("%s %s %lf", stu[i].no, stu[i].name, stu[i].total);
		printf("\n");
	}
	return 0;
}
