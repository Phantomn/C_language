#include <stdio.h>

int main(){
	FILE* stream;
	char name[10];
	int kor,eng,total;

	printf("1. Name : ");
	fscanf(stdin, "%s", name);

	printf("2. kor, eng : ");
	fscanf(stdin, "%d %d", &kor, &eng);
	total = kor + eng;

	stream=fopen("data4.txt","w");
	fprintf(stream, "%s %d %d %d \n",name,kor,eng,total);
	//fprintf(stdout, "%s %d %d %d\n",name,kor,eng,total);
	fclose(stream);

	return 0;
}
