#define _CRT_SECURE_NO_WARNING
#include <stdio.h>
#include <string.h>

int main(){
	char s1[30]="You Can Advance";
	char *sArr[10] = {NULL, };
	int i =0;

	char *ptr = strtok(s1, " ");

	while(ptr != NULL){
		sArr[i] = ptr;
		i++;

		ptr = strtok(NULL, " ");
	}
	for(i=0;i<10;i++){
		if(sArr[i]!=NULL)
			printf("%s\n",sArr[i]);
	}
	return 0;
}