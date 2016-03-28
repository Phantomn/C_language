#define _CRT_SECURE_NO_WARNING

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*int main(){
	char *s1 = malloc(sizeof(char)* 20);
	sprintf(s1, "Hello, %s","world!");

	printf("%s\n",s1);
	free(s1);

	return 0;
}*/
int main(){
	char *s1 = malloc(sizeof(char) * 30);

	sprintf(s1, "%c %d %f %e",'a', 10, 3.2f, 1.123456e-21f);

	printf("%s\n",s1);

	free(s1);

	return 0;
}