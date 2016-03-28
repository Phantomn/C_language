#include <stdio.h>
#include <stdlib.h>

int main(){
	int i,j,t,k;
	FILE* stream=fopen("99_putc.txt","w");
	int input=0;
	int result[2];

	for(i=1,t=1;i<=9;i++,t++){
		for(j=1,k=1;j<=9;j++,k++){
			result[0]=t*k/10+48;
			result[1]=t*k%10+48;
			fputc(i,stream);
			fputc('*',stream);
			fputc(j,stream);
			fputc('=',stream);
			if(result[0]!=48){
				fputc(result[0],stream);
				fputc(result[1],stream);
				fputc('\n',stream);
			}
		}
		fputc('\n',stream);
	}
	fclose(stream);

	return 0;
}
