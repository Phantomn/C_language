#include <stdio.h>
#include <ctype.h>

int main(){
	char a1='A', a2='a', a3='B';
	int re1,re2,re3;

	re1=isalnum(a1);
	re2=isupper(a2);
	re3=islower(a3);


	printf("%d %d %d\n",re1,re2,re3);

	return 0;
}
