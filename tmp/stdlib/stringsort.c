#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void sort(char (*p)[16],int n);
int main(){
	int i=0;
	char str[10][16];
	int len;
	char ch;
	for(i=0;i<10;i++){
		printf("입력을 종료하려면 엔터를 누르세요.\n");
		printf("Input Word : ");		
		gets(str[i]);
		ch=str[i][0];
		if(ch==0)
			break;
	}
	len=i;
	sort(str,len);



	for(i=0;i<len;i++){
		printf("%s\n",str[i]);
	}

	return 0;
}
void sort(char (*p)[16],int n){
	int i,j;
	int val;
	char temp[10][16];
	int len;


	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			val=strcmp(p[i],p[j]);
			if(val>0){
				strcpy(temp[i],p[i]);
				strcpy(p[i],p[j]);
				strcpy(p[j],temp[i]);
			}
		}
	}
}
