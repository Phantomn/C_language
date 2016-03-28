#include <stdio.h>
#include <string.h>

int main(){
	char arr1[50]="Good-morning-Good-afternoon-Good-evening";
	char* p=NULL;
	int count=0;

	p=strtok(arr1,"-");

	for(count=0;p!=NULL;count++){
		puts(p);
		p=strtok(NULL,"-");
	}

	printf("토큰의 개수는 총 %d개입니다.\n",count);

	return 0;
}
