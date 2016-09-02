#include <stdio.h>
#include <stdlib.h>
#include "ArrayBaseStack.h"

void Init(Stack* pstack){
	pstack->topIndex = -1;
}

int IsEmpty(Stack* pstack){
	if(pstack->topIndex == -1)
		return TRUE;
	else
		return FALSE;
}

void Push(Stack* pstack, Data data){
	pstack->topIndex += 1;
	pstack->stackArr[pstack->topIndex] = data;
}

Data Pop(Stack* pstack){
	int rIdx;

	if(IsEmpty(pstack)){
		printf("Stack Is Empty!!\n");
		exit(-1);
	}

	rIdx = pstack->topIndex;
	pstack->topIndex -= 1;

	return pstack->stackArr[rIdx];
}

Data Peek(Stack* pstack){
	if(IsEmpty(pstack)){
		printf("Stack Is Empty!!\n");
		exit(-1);
	}

	return pstack->stackArr[pstack->topIndex];
}