#include <stdio.h>

char mod_strcpy(char* dst, char* src){
	while(*src){
		*dst = *src;
		*src++;
		*dst++;
	}
	*dst = '\0';
	return 1;
}
int mod_strlen(char* str){
	int i = 0;
	for(i=0;;i++){
		if(str[i]=='\0')
			return i;
	}
}
int main(){
	char str[] = "PSY";
	char buf[100];

	scanf("%s",buf);
	mod_strcpy(str,buf);
	printf("%d\n",mod_strlen(buf));
	printf("Str buffer is %s\n",str);

	return 0;
}