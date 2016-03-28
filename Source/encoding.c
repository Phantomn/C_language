#include <stdio.h>

int main()
{
	int i, j;
	char buf[20] = {0};
	int cnt = 1;
	char cmp;

	scanf("%s", buf);
	for(i=0; i<20; i++){
		cmp = buf[i];
		if(cmp == buf[i+1])
			cnt ++;
		else{
			printf("%d%c", cnt, buf[i]);
			cnt = 1;
		}
	}
	printf("\n");
	return 0;
}

