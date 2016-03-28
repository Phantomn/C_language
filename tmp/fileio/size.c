#include <stdio.h>

int main(){
	FILE* stream=fopen("score.txt", "rb");
	fseek(stream,0,SEEK_END);
	printf("score.txt's size : %dByte\n",ftell(stream));
	fclose(stream);

	return 0;
}
