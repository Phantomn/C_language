#include <stdio.h>
#include <string.h>

int main(){
	char str[1000000];
	char* ptr= NULL;
	int count=0;

	fgets(str, 1000000, stdin);
	//printf("%s\n",str);

	if(ptr=strtok(str, " ")){
		count++;
		//printf("%s\n",ptr);
	}
	while(ptr=strtok(NULL," ")){
		count++;
		//printf("%s\n",ptr);
	}
	printf("%d\n",count);

	return 0;
}
