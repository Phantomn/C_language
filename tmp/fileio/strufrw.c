#include <stdio.h>

typedef struct score{
	char name[20];
	double kor, eng,tot;
}SCORE;

int main(){
	SCORE s,ss;
	FILE* stream;

	printf("1. Name : ");
	fscanf(stdin,"%s",s.name);

	printf("2. kor and eng : ");
	fscanf(stdin,"%lf %lf",&s.kor,&s.eng);
	s.tot=s.kor+s.eng;

	stream=fopen("student.dat","wb");
	fwrite(&s, sizeof(s), 1,stream);
	fclose(stream);

	stream=fopen("student.dat","rb");
	fread(&ss,sizeof(s),1,stream);
	fprintf(stdout, "%s %.2lf %.2lf %.2lf\n",ss.name, ss.kor,ss.eng,ss.tot);

	fclose(stream);

	return 0;
}
