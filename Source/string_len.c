#include <stdio.h>
#include <string.h>

int main(){
	char str[1000];
	int i=1;
	char *tok[100]={NULL,};
	int cnt=0;
	int len[100];
	gets(str);
	char *ptr;

	ptr=strtok(str, " ");
	tok[0]=ptr;
	//printf("%s\n",tok[0]);
	while(ptr=strtok(NULL," ")){
		tok[i]=ptr;
	//	printf("%s\n",tok[i]);
		cnt++;
		i++;
	}
	for(i=0;i<=cnt;i++)
		len[i]=strlen(tok[i]);

	for(i=0;i<=cnt;i++)
		printf("%d ",len[i]);
	//printf("\n");
	return 0;
}
