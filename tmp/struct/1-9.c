#include <stdio.h>

typedef struct score{
	double math;
	double eng;
	double average;
} SCORE;

struct student{
	int no;
	SCORE s;
};

typedef struct student STUDENT;

int main(){
	STUDENT stu={1,{90,80,0}};

	stu.s.average=(stu.s.math + stu.s.eng)/2;
	printf("No. : %d\n",stu.no);
	printf("Average : %lf\n",stu.s.average);

	return 0;
}
