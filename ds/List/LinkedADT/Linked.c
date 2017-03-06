#include <stdio.h>
#include "Linked.h"

void ListInit(List* plist){
       plist->head = (Node*)malloc(sizeof(Node));
       plist->head->next = NULL;
       plist->comp = NULL;
       plist->numOfData = 0;
}

void LInsert(List* plist, LData data){
        if(plist->comp == NULL)
                FInsert(plist, data);
        else
                SInsert(plist, data);
}

int FInsert(List* plist, LData* pdata){
        Node* newNode = (Node*)malloc(sizeof(Node));
        newNode->data = data;

        newNode->next = plist->head->next;
        plist->head->next = newNode;

        (plist->numOfData)++;
}

int LNext(List* plist, LData* pdata){
        if(plist->curPosition >= (plist->numOfData)-1)
                return FALSE;

        (plist->curPosition)++;
        *pdata = plist->arr[plist->curPosition];
        return TRUE;
}

LData LRemove(List* plist){
        int rpos = plist->curPosition;
        int num = plist->numOfData;
        int i;
        LData rdata = plist->arr[rpos];

        for(i=rpos; i<num-1; i++)
                plist->arr[i] = plist->arr[i+1];

        (plist->numOfData)--;
        (plist->curPosition)--;
        return rdata;
}

int LCount(List* plist){
        return plist->numOfData;
}

void SetSortRule(List* plist, int (*comp)(LData d1, LData d2)){

}