#include<stdio.h>



int main()


{
	int binary,number,a[100],i=0;
	int count,b,ten,j;


	printf("이진수를 입력해주세요");
	scanf("%d",&binary);


	for(i=0; binary!=0; i++)
	{
		number=binary%2;
		a[i]=number;
		binary=binary/10;
	}


	count=i-1;
	b=1;
	ten=0;


	for(i=0; i<count; i++)
	{


		for(j=0; j<i; j++)
			b*=2;
		ten+=(a[i]*b);
	}
	printf("%d",ten);



}
