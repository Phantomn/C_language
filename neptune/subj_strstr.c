#include <stdio.h>
#include <string.h>

int main(){
	char s1[30] = "You Are (Not) Alone";
	char *ptr;

	ptr = strchr(s1, 'o');

	while(ptr!=NULL){
		printf("%s\n",ptr);
		ptr = strchr(ptr+1,'o');
	}
	return 0;
}