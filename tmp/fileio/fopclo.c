#include <stdio.h>

int main(){
	FILE* stream;
	int file_state;

	//create file stream and file open
	stream=fopen("data1.txt","w");
	if(stream==NULL)
		printf("File Open Error\n");

	//file close
	file_state=fclose(stream);
	if(file_state==EOF)
		puts("File Close Error");

	return 0;
}
