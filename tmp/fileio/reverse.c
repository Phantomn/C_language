#include <stdio.h>
#include <string.h>

int main(){
	FILE* fp1=fopen("source.txt", "r");
	FILE* fp2=fopen("dest.txt", "w");
	int input=0;
	char str[1000];
	int i=0;

	fgets(str,sizeof(str),fp1);
	i=strlen(str)-1;

	while(input!=EOF){
		input=str[i];
		fputc(input,fp2);
		i--;
		if(i<0){
			input=str[strlen(str)-1];
			fputc('\n',fp2);
			break;
		}
	}


	fclose(fp1);
	fclose(fp2);

	return 0;
}
