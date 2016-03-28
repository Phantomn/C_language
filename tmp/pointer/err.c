#include <stdio.h>

int main(){
	char* array1="ABCD";
	char array2[]="ABCD";

	array1[0]='X';
	array2[0]='X';

	printf("%s\n",array1);
	printf("%s\n",array2);

	return 0;
}
