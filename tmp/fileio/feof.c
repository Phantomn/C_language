#include <stdio.h>

int main(){
	FILE* fp1;
	FILE* fp2;

	char buf[50];

	fp1=fopen("data1.txt","r");
	fp2=fopen("data2.txt","w");
	
	while(!feof(fp1)){
		fgets(buf,sizeof(buf),fp1);
		fputs(buf,fp2);
	}

	fclose(fp1);
	fclose(fp2);

	return 0;
}
