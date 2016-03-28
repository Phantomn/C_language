#include <stdio.h>
#include <string.h>

typedef struct student{
	char no[10];
	char name[20];
	int mid, last, att, task, tot;
	char grade[3];
}STUDENT;


int main(){
	STUDENT stu[3];
	FILE* stream=fopen("student.txt","w");
	int i=0;
	fprintf(stream, "no\tname\tmid\tlast\tatt\ttask\ttotal\tgrade\n");

	for(i=0;i<3;i++){
		fscanf(stdin,"%s %s %d %d %d %d",stu[i].no,stu[i].name,&stu[i].mid,&stu[i].last,&stu[i].att,&stu[i].task);

		stu[i].tot=stu[i].mid+stu[i].last+stu[i].att+stu[i].task;

		if(stu[i].tot>=95)
			strcpy(stu[i].grade, "A+");
		else if(stu[i].tot>=90)
			strcpy(stu[i].grade, "A");
		else if(stu[i].tot>=85)
			strcpy(stu[i].grade, "B+");
		else if(stu[i].tot>=80)
			strcpy(stu[i].grade, "B");
		else if(stu[i].tot>=75)
			strcpy(stu[i].grade, "C+");
		else if(stu[i].tot>=70)
			strcpy(stu[i].grade, "C");
		else if(stu[i].tot>=65)
			strcpy(stu[i].grade, "D+");
		else if(stu[i].tot>=60)
			strcpy(stu[i].grade, "D");
		else
			strcpy(stu[i].grade, "F");

		fprintf(stream,"%s\t%s\t%d\t%d\t%d\t%d\t%d\t%s\n",stu[i].no, stu[i].name, stu[i].mid, stu[i].last, stu[i].att, stu[i].task, stu[i].tot, stu[i].grade);
	}

	fclose(stream);


	return 0;
}
