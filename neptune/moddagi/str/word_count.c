#include <stdio.h>
#include <string.h>

int main(){
	char str[1001];
	int count=0;
	char ch[] = "the";
	scanf("%[^\n]s",str);

	char *ptr = strtok(str," ");

	while(ptr!=NULL){
		if(strcmp(ptr,ch)==0){
			count++;
		}

		ptr = strtok(NULL, " ");
	}
	printf("%d\n",count);

	return 0;
}