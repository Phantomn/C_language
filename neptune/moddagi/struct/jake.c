#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char** argv)
{
	int num;
	int i;
	int arr[9]={0};

	num=atoi(argv[1]);
	if(num>100000000)
	{
		printf("입력범위 초과");
		return 0;
	}
	printf("%d\n",num);


	for(i=8;i>0;--i)
		arr[i] = (num % (int)pow(10,i))/pow(10,i-1);

	for(i=8;i>=0;--i)
	{
		switch(arr[i])
		{
			case 0:
				continue;
			case 1:
				if(i==5 || i==1)
					printf("일");
				break;
			case 2:
				printf("이");
				break;
			case 3:
				printf("삼");
				break;
			case 4:
				printf("사");
				break;
			case 5:
				printf("오");
				break;
			case 6:
				printf("육");
				break;
			case 7:
				printf("칠");
				break;
			case 8:
				printf("팔");
				break;
			case 9:
				printf("구");
				break;
		}

		switch(i)
		{
			case 0:
			case 1:
				break;
			case 8:
			case 4:
				printf("천 ");
				break;
			case 7:
			case 3:
				printf("백 ");
				break;
			case 6:
			case 2:
				printf("십 ");
				break;
			case 5:
				printf("만 ");
				break;
		}

	}

	return 0;

}
