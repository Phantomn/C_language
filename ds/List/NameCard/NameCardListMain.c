#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ArrayList.h"
#include "NameCard.h"

int main(){
	List list;
	NameCard* pcard;
	NameCard chPhone;

	ListInit(&list);

	pcard = MakeNameCard("Phantom", "010-1111-2222");
	LInsert(&list, pcard);

	pcard = MakeNameCard("HeadFish", "010-2222-3333");
	LInsert(&list, pcard);

	pcard = MakeNameCard("Mathboy", "010-3333-4444");
	LInsert(&list, pcard);

	printf("Present Data Count : %d\n", LCount(&list));

	if(LFirst(&list, &pcard)){
		ShowNameCardInfo(pcard);

		while(LNext(&list, &pcard))
			ShowNameCardInfo(pcard);
	}

	printf("\n\n");

	strcpy(chPhone.name, "Mathboy");
	strcpy(chPhone.phone, "010-3333-4444");

	if(LFirst(&list, &pcard)){
		if(NameCompare(pcard, "Mathboy")==1){
			ChangePhoneNum(pcard, "010-7777-8888");
		}

		while(LNext(&list, &pcard)){
			if(NameCompare(pcard, "Mathboy")==1){
				ChangePhoneNum(pcard, "010-7777-8888");
			}
		}
	}

	printf("Present Data Count : %d\n", LCount(&list));

	if(LFirst(&list, &pcard)){
		ShowNameCardInfo(pcard);

		while(LNext(&list, &pcard))
			ShowNameCardInfo(pcard);
	}

	printf("\n\n");

	if(LFirst(&list, &pcard)){
		if(NameCompare(pcard, "Mathboy")==1){
			pcard = LRemove(&list);
			free(pcard);
		}

		while(LNext(&list, &pcard)){
			if(NameCompare(pcard, "Mathboy")==1){
				pcard = LRemove(&list);
				free(pcard);
			}
		}
	}
	if(LFirst(&list, &pcard)){
		ShowNameCardInfo(pcard);

		while(LNext(&list, &pcard))
			ShowNameCardInfo(pcard);
	}

	printf("\n\n");
	printf("Present Data Count : %d\n", LCount(&list));

	return 0;
}