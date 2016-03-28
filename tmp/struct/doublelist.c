#include <stdio.h>

typedef struct student{
	char name[10];
	int score;
	struct student* left_link;
	struct student* right_link;
}STUDENT;

int main(){
	STUDENT stu1={"Kim",90,NULL,NULL};
	STUDENT stu2={"Lee",80,NULL,NULL};
	STUDENT stu3={"Goo",60,NULL,NULL};

	stu1.left_link=&stu2;
	stu1.right_link=&stu3;


	printf("%s %d\n",stu1.name,stu1.score);
	printf("%s %d\n",stu1.left_link->name,stu1.left_link->score);
	printf("%s %d\n",stu1.right_link->name,stu1.right_link->score);

	return 0;
}
