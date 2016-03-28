#include <stdio.h>
#include <string.h>

int main(){
	char text[30] = "Hello";
	int length;
	int i;

	length = strlen(text);

	for(i=0;i<length-1;i++){
		printf("%c%c\n",text[i],text[i+1]);
	}

	return 0;
}