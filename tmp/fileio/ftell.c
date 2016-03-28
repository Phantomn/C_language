#include <stdio.h>

int main(){
	FILE* stream;
	long dist;

	stream=fopen("ftell.txt","w");
	fputs("Phantom",stream);
	fclose(stream);

	stream=fopen("ftell.txt","r");

	fseek(stream,2,SEEK_SET);
	fprintf(stdout,"%c\n",fgetc(stream));

	dist=ftell(stream);
	printf("distance : %ld\n",dist);
	fclose(stream);

	return 0;
}
