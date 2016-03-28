#include <stdio.h>

typedef struct score{
	char no[3];
	char name[20];
	double one, two, thr, tot;
}SCORE;

int main(){
	SCORE stu[7];
	int i;
	int num;
	FILE* fp1=fopen("score.txt", "r");
	FILE* fp2=fopen("score_print.txt", "w");
	for(i=0;i<7;i++){
		fscanf(fp1,"%s %s %lf %lf %lf",stu[i].no, stu[i].name, &stu[i].one, &stu[i].two, &stu[i].thr);
		stu[i].tot=stu[i].one+stu[i].two+stu[i].thr;

		fprintf(fp2,"%s %s %.1lf %.1lf %.1lf\n",stu[i].no, stu[i].name, stu[i].one, stu[i].two, stu[i].thr);
	}
	printf("Input number : ");
	scanf("%d",&num);
	printf("name : %s, total : %.1lf\n",stu[num-1].name,stu[num-1].tot);
	fclose(fp1);
	fclose(fp2);


	return 0;
}

