#include <stdio.h>

struct score{
	double math;
	double english;
	double total;
};

struct student{
	int no;
	struct score s;
};

int main(){
	//struct student stu={1,{90,80,0}};
	struct student stu={1,90,80,0};


	stu.s.total=stu.s.math + stu.s.english;

	printf("No. : %d\n", stu.no);
	printf("Total Score : %lf\n",stu.s.total);

	return 0;
}
