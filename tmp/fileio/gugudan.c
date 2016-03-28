#include <stdio.h>

int main(){
	int i,j;
	FILE* stream;

	stream=fopen("99.txt","w");

	if(stream==NULL)
		printf("file open error\n");

	for(i=2;i<=9;i++){
		for(j=1;j<=9;j++){
			fprintf(stream,"%d * %d = %d\n",i,j,i*j);
		}
		fprintf(stream,"\n\n");
	}
	fclose(stream);

	return 0;
}
