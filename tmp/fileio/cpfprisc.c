#include <stdio.h>

int main(){
	FILE* fp1;
	FILE* fp2;

	char name[10]=" ";
	int kor=0,eng=0,tot=0;

	fp1=fopen("data4.txt","r");
	fp2=fopen("data5.txt","w");


	fscanf(fp1,"%s %d %d %d\n", name,&kor,&eng,&tot);
	fprintf(fp2,"%s %d %d %d\n", name,kor,eng,tot);
	//fprintf(stdout,"%s %d %d %d\n", name,kor,eng,tot);
	

	fclose(fp1);
	fclose(fp2);


	return 0;
}

