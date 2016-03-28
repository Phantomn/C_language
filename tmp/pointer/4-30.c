#include <stdio.h>

int main(){
	char array[]="ABCD";
	char* p="ABCD";

	array[0]='X';

	p=array;

	printf("%s \n",p);
	printf("%s \n",array);


	return 0;
}
