#include <stdio.h>
#include <string.h>

int main(){
	char str[1001]="Across the courtesy bay the white palaces of fashionable East Egg glittered along the water, and the history of the summer really begins on the evening I drove over there to have dinner with the Tom Buchanans. Daisy was my second cousin once removed and I'd known Tom in college. And just after the war I spent two days with them in Chicago.";
	char *ptr;
	int count=0;

	scanf("%[^\n]s",str);
	ptr = strchr(str,' ');

	while(ptr!=NULL){
		count++;
		ptr =strchr(ptr+1,' ');
	}
	printf("%d\n",count);
	return 0;
}