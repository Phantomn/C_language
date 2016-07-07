#include <stdio.h>
#include "ArrayList.h"

int main(void){
	//ArrayList Create and Init
	List list;
	int data;
	ListInit(&list);

	LInsert(&list, 11);LInsert(&list, 11);
	LInsert(&list, 22);LInsert(&list, 22);
	LInsert(&list, 33);

	//Saved data print
	printf("Present Data Count : %d\n",LCount(&list));

	if(LFirst(&list, &data)){
		printf("%d ", data);

		while(LNext(&list, &data)){
			printf("%d ", data);
		}
	}
	printf("\n\n");

	// Search 22 and Delete
	if(LFirst(&list, &data)){
		if(data == 22)
			LRemove(&list);

		while(LNext(&list, &data)){
			if(data == 22)
				LRemove(&list);
		}
	}

	//Presend Data Count
	printf("Present Data Count: %d\n",LCount(&list));

	if(LFirst(&list, &data)){
		printf("%d ", data);

		while(LNext(&list, &data)){
			printf("%d ", data);
		}
	}
	printf("\n\n");
	return 0;
}