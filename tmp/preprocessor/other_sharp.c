#include <stdio.h>

#define OUTPUT1(a,b) a+b
#define OUTPUT2(a,b) #a "+" #b

int main(){
	printf("%d \n",OUTPUT1(11,22));
	printf("%s \n",OUTPUT2(11,22));


	return 0;
}

