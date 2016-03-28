#include <stdio.h>
#include "ArrayList.h"
#include "NameCard.h"

int main(){
	List list;
	NameCard *pcard;
	ListInit(&list);

	pcard=MakeNameCard("Phantom","010-9305-3364");
	LInsert(&list,pcard);

	pcard=MakeNameCard("NeonKid","010-9132-4869");
	LInsert(&list,pcard);

	pcard=MakeNameCard("gila","010-3096-2632");
	LInsert(&list,pcard);

	printf("Present Data Count : %d\n",LCount(&list));

	if(LFirst(&list,&pcard)){
		ShowNameCardInfo(pcard);

		while(LNext(&list,&pcard))
			ShowNameCardInfo(pcard);
	}
	printf("-------------------------------------------------\n");
	if(LFirst(&list,&pcard)){
		if(!NameCompare(pcard, "NeonKid"))
			printf("Name : %s, Phone : %s\n",pcard->name,pcard->phone);
		else{
			while(LNext(&list,&pcard)){
				if(!NameCompare(pcard, "NeonKid")){
					printf("Name : %s, Phone : %s\n",pcard->name,pcard->phone);
				}
			}
		}
	}
	if(LFirst(&list,&pcard)){
		if(!NameCompare(pcard, "gila"))
			ChangePhoneNum(pcard, "010-1234-5678");

		else{
			while(LNext(&list,&pcard)){
				if(!NameCompare(pcard, "gila"))
					ChangePhoneNum(pcard, "010-1234-5678");
			}
		}
	}
	if(LFirst(&list,&pcard)){
		if(!NameCompare(pcard, "Phantom")){
			pcard=LRemove(&list);
			free(pcard);
		}
		else{
			while(LNext(&list,&pcard)){
				if(!NameCompare(pcard, "Phantom")){
					pcard=LRemove(&list);
					free(pcard);
				}
			}
		}
	}
	printf("-----------------------------------------------\n");
	if(LFirst(&list,&pcard)){
		ShowNameCardInfo(pcard);

		while(LNext(&list,&pcard))
			ShowNameCardInfo(pcard);
	}
	printf("\n\n");

	printf("Present Data Count : %d\n",LCount(&list));
	return 0;
}
