#include <stdio.h>

int main(){
	char* string[2]={"I Love C", "Hello World"};
	char* p=string[0];
	char* q=string[1];


	printf("%s %s\n",p, q+6);

	return 0;
}
