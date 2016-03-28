#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

typedef struct student{
	char no[10];
	char name[20];
}STUDENT;

int main(int argc, char* argv[]){
	int i;
	char arr[40];
	STUDENT stu;

	setreuid(3002,3002);
//	stu.no="1";
//	stu.name="one";
	strcpy(stu.no, "1");
	strcpy(stu.name, "one");
	strcpy(arr,argv[1]);

	printf("No. : %s, Name : %s\n",stu.no, stu.name);
	printf("%s\n",arr);

	return 0;
}
