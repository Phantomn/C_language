#include <stdio.h>

int main(){
	int i;
	char alpha;

	scanf("%c",&alpha);
	for(i=alpha;i<=122;i++){
		printf("%c",i);
	}
	printf("\n");
	return 0;
}