#include <stdio.h>
#include <string.h>

int main(){
	char ch[1000];
	int i;
	int cnt=0;
	scanf("%s",ch);


	for(i=0;i<strlen(ch);i++){
		if(ch[i]=='1'){
			printf("%d",i+1);
			return 0;
		}
	}
	return 0;
}
