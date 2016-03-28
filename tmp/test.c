#include <stdio.h>

int main(){
	int k=2;
	int n=1;
	bool a=(k >= 1 && k <= 14);
	bool b=(n >= 1 && n <= 14);


	if(a)
		printf("true");
	else
		printf("false");
	if(b)
		printf("true");
	else
		printf("false");
	return 0;
}
