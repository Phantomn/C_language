#include <stdio.h>

int main(){
	int hour;
	int minute;
	int second;

	int passed_hour;
	int passed_minute;
	int passed_second;

	int all_second;


	printf("This is hour : ");
	scanf("%d",&hour);
	printf("This is minute : ");
	scanf("%d",&minute);
	printf("This is second : ");
	scanf("%d",&second);

	passed_hour = hour * 60 * 60;
	passed_minute = minute * 60;
	passed_second = second;

	all_second = passed_hour + passed_minute + passed_second;
	
	printf("0시 0분 0 초부터 현재까지 %d초 지났습니다.\n",all_second);

	return 0;
}
