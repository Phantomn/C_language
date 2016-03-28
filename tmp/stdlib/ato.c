#include <stdio.h>
#include <stdlib.h>

int main(){
	char* str1="3.14";
	char* str2="100";
	char* str3="1000000";

	double n1;
	int n2;
	long n3;

	n1=atof(str1);
	n2=atoi(str2);
	n3=atol(str3);

	printf("%lf %d %ld\n",n1,n2,n3);
	return 0;
}
