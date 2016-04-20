#include <stdio.h>
#include <string.h>

int main(){
	char str[100];
	char input[100];
	char *ptr;
	int i=0;
	int len;

	printf("Please enter ten characters : ");
	scanf("%[^\n]s",input);

	ptr = strtok(input, " ");		//공백으로 문자열을 나눔
	while(ptr!=NULL){
		str[i] = *ptr;				//문자 저장
		ptr = strtok(NULL, " ");
		i++;
	}
	printf("\n");
	len = strlen(str) - 2;			// 길이재보니 12  NULL이 두개인것같기도하고 애매

	for(i=0;i<len/2;i++)
		printf("%c %c\n",str[i],str[len-1-i]);
	return 0;
}