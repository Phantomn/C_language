#include <stdio.h>

int BSearchRecur(int ar[], int first, int last, int target){
	int mid;
	if(first > last)
		return -1;
	mid = (first+last)/2;

	if(ar[mid] == target)
		return mid;
	else if(target < ar[mid])
		return BSearchRecur(ar, first, last-1, target);
	else
		return BSearchRecur(ar, first+1, last, target);
}

int main(){
	int arr[]={1,3,5,7,9};
	int idx;
	int len=sizeof(arr)/sizeof(int);

	idx = BSearchRecur(arr,0,len-1,7);
	printf("%d\n",idx);
	if(idx == -1)
		printf("Search failed\n");
	else
		printf("target saved index : %d\n",idx);

	idx = BSearchRecur(arr,0,len-1,4);
	printf("%d\n",idx);
	if(idx == -1)
		printf("Search failed\n");
	else
		printf("target saved index : %d\n",idx);


	return 0;
}
