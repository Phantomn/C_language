#include <stdio.h>
#include <string.h>

typedef struct student{
	char no[10];
	char name[20];
	int eng;
	int kor;
}STUDENT;

int main(){
	int i;
	int n;
	int j=1;
	char num[10]="2010";
	char* check=NULL;
	printf("Input studnet : ");
	scanf("%d",&n);

	STUDENT stu[n];

	for(i=0;i<n;i++){
		printf("no : ");
		scanf("%s",stu[i].no);
		printf("name : ");
		scanf("%s",stu[i].name);
		printf("eng : ");
		scanf("%d",&stu[i].eng);
		printf("kor : ");
		scanf("%d",&stu[i].kor);
		printf("--------------\n");
		printf("\n");
	}
	for(i=0;i<n;i++){
		check=strstr(stu[i].no,num);
		if(strcmp(check,num)==0){
			printf("%d's no : %s\n", j,stu[i].no);
			printf("%d's name : %s\n",j,stu[i].name);
			printf("%d's eng : %d\n",j,stu[i].eng);
			printf("%d's kor : %d\n",j,stu[i].kor);
			printf("-------------------------\n");
			printf("\n");
			j++;
		}
	}
	return 0;
}
