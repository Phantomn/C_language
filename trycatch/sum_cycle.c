#include <stdio.h>

int main(){
	int result;
	int ori_ten, ori_one;
	int ten, one;
	int count=0;
	int re_one;

	scanf("%d",&result);

	ori_ten = result/10;
	ori_one = result%10;
	result = ori_ten + ori_one;

	ten = ori_ten;
	one = ori_one;
	//result = 26
	//ori_ten = 2, ori_one = 6, result = 8
	//ten = 2 , one = 6
	//re_one = 8
	re_one = result%10;
	do{
		 result = one + re_one;//
		 printf("%d + %d = %d\n",one, re_one, result);
		 one = re_one;//4
		 re_one = result%10;//2
		 count++;
		 printf("result : %d ten : %d one : %d count : %d\n",result, re_one, one, count);
	}while((ori_ten != one) && (ori_one != re_one));
	count++;

	printf("\n\nori_ten : %d, ten : %d\nori_one : %d, one : %d\n",ori_ten, one, ori_one, re_one);
	printf("%d\n",count);

	return 0;
}