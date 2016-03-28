#include <stdio.h>
#define _CRT_SECURE_NO_WARNING

int main(){
	int num;
	char str[31];
	char string[31];

	scanf("%d %s",&num,string);
	if(num==1)
		sprintf(str, "%dst %s",num,string);
	else if(num==2)
		sprintf(str, "%dnd %s",num,string);
	else if(num==3)
		sprintf(str, "%drd %s",num,string);
	else
		sprintf(str, "%dth %s",num,string);

	printf("%s\n",str);
}
