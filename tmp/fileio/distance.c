#include <stdio.h>

int main(){
	FILE* stream=fopen("ftell.txt","rb");
	fseek(stream,0,SEEK_END);
	printf("ftell.txt's size : %d byte\n",ftell(stream));
	fclose(stream);

	return 0;
}
