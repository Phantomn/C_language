#include <stdio.h>

int main(){
	int b;
	int cun;
	int bak;
	int sib;
	int il;
	int dec;
	
	printf("Input Binary : ");
	scanf("%d",&b);

	cun = b/1000;
	bak = (b%1000)/100;
	sib = ((b%1000)%100)/10;
	il = (((b%1000)%100)%10);

	dec = cun*8 + bak*4 + sib*2 + il*1;

	printf("binary %d is decimal %d\n",b,dec);

	return 0;
}
