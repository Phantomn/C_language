#include <stdio.h>

int main(){
	char arr[10]="Empty!";
	FILE* stream=fopen("data1.txt","w");
	if(stream==NULL){
		printf("fopen error\n");
		return 1;
	}
	puts(arr);
	fputs(arr,stream);
	fclose(stream);
	return 0;
}
