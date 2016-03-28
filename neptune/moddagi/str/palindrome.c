#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#define _CRT_SECURE_NO_WARNINGS		// scanf 보안 경고로 인한 컴파일 에러 방지

int main(){
	char word[30];					// 단어를 저장할 배열
	int length;						// 단어의 길이를 잴 변수
	bool isPalindrome = true;		// 회문 판별 플래그
	int i;

	printf("Input word : ");
	scanf("%s",word);

	length = strlen(word);			// 단어 길이 저장

	for(i = 0; i< length/2; i++){	// 단어의 절반만큼 반복
		if(word[i] != word[length -1 -i]){	// 단어의 처음과 끝을 비교, 거짓이면 플래그를 0으로 바꿈
			isPalindrome = false;
			break;
		}
	}
	if(isPalindrome == 1)
		printf("True\n");
	else
		printf("False\n");

	return 0;
}