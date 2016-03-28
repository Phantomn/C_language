#include <stdio.h>

int main(){
	char ch=0;

	do{
		ch=getchar();
		if(ch==EOF){
			printf("err\n");
			return 0;
		}
		putchar(ch);
	}while(1);
	return 0;
}
