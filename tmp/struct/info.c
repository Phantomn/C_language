#include <stdio.h>

typedef struct info{
	int no;
	char blood;
	double eye;
	int kg;
}INFO;


int main(){
	INFO stu[5];
	int i;

	for(i=0;i<5;i++){
		printf("학생의 정보를 입력하세요.\n");
		printf("%d 학번 혈액형 시력 몸무게 : ", i+1);
		scanf("%d %c %lf %d", &stu[i].no, &stu[i].blood, &stu[i].eye, &stu[i].kg);
	}

	for(i=0;i<5;i++){
		printf("%d 학생의 학번 : %d, 혈액형 : %c, 시력 : %lf, 몸무게 : %d\n",i+1,stu[i].no, stu[i].blood, stu[i].eye, stu[i].kg);
	}
	return 0;
}
