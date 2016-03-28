#include <stdio.h>

char* string1();
char* string2();


int main(){
	char* p1=NULL;
	char* p2=NULL;


	p1=string1();
	p2=string2();


	printf("%s \n",p1);
	printf("%s \n",p2);
	return 0;
}

char* string1(){
	static char str[]="Good";
	return str;
}
char* string2(){
	static char str[]="Morning";
	return str;
}
