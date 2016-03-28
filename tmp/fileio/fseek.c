#include <stdio.h>

int main(){
	FILE* stream;
	stream=fopen("seek.txt", "w");
	fputs("Phantom",stream);
	fclose(stream);

	stream=fopen("seek.txt","r");

	fseek(stream,0,SEEK_SET);
	fprintf(stdout, "%c \n",fgetc(stream));//P

	fseek(stream,2,SEEK_SET);
	fprintf(stdout, "%c \n",fgetc(stream));//a

	fseek(stream,-1,SEEK_END);
	fprintf(stdout, "%c \n",fgetc(stream));//m

	fseek(stream,-2,SEEK_CUR);
	fprintf(stdout, "%c \n",fgetc(stream));//o

	fclose(stream);
	return 0;
}
