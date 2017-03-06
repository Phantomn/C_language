#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "NameCard.h"


// 구조체 변수의 동적 할 당 및 초기화 후 주소 값 반환
NameCard* MakeNameCard(char* name, char* phone){
	NameCard* pcard = (NameCard*)malloc(sizeof(NameCard));
	strcpy(pcard->name, name);
	strcpy(pcard->phone,phone);

	return pcard;
}

// 구조체 변수의 정보 출력
void ShowNameCardInfo(NameCard* pcard){
	printf("Name : [ %s ], Phone : [ %s ]\n",pcard->name,pcard->phone);
}


// 이름이 같으면 0, 다르면 1 반환
int NameCompare(NameCard* pcard, char* name){
	if(!(strcmp(pcard->name,name))){
		printf("Search~! %s\n",pcard->name);
		return 1;
	}
	else
		return 0;
}

// 전화번호 정보를 변경
void ChangePhoneNum(NameCard* pcard, char* phone){
	strcpy(pcard->phone, phone);
}
