#include <stdio.h>
#include <string.h>

int main(){
	char s1[30] = "You Can Advance";

	char *ptr = strrchr(s1, 'a');


	while(ptr!=NULL){
		printf("%s\n",ptr);
		ptr = strrchr(ptr-5,'a');
	}

	return 0;
}