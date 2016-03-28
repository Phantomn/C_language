#include <stdio.h>

#define OUTPUT1(a) a
#define OUTPUT2(a) #a

int main(){
	printf("%d\n",OUTPUT1(1234));
	printf("%s\n",OUTPUT2(1234));

	return 0;
}

