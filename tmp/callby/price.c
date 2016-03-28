#include <stdio.h>

int main(){
	char* str[]={"SKT","LGU"};
	int skt_mprice=10;
	int lgu_mprice=20;

	int minute,second;
	int skt_price,lgu_price;
	printf("Input time : ");
	scanf("%d",&minute);

	skt_price=minute*skt_mprice;
	lgu_price=minute*lgu_mprice;

	printf("telecom : %s\n",str[0]);
	printf("time : %d\n",minute);
	printf("used price : %d\n",skt_price);


	printf("-------------------------\n");

	printf("telecom : %s\n",str[1]);
	printf("time : %d\n",minute);
	printf("used price : %d\n",lgu_price);

	return 0;
}
