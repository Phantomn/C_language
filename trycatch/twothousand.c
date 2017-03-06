#include <stdio.h>

int main(){
	int x, y;
	int date=0;
	int i;
	int day;

	scanf("%d %d",&x,&y);

	for(i=1;i<x;i++){
		switch(i){
			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
			case 12:
				date+=31;
				break;
			case 4:
			case 6:
			case 9:
			case 11:
				date+=30;
				break;
			default:
				date+=28;
				break;
		}
	}

	day = (date+(y-1))%7;
	//printf("%d %d\n",date, day);
	switch(day){
		case 0:
			printf("MON\n");
			break;
		case 1:
			printf("TUE\n");
			break;
		case 2:
			printf("WED\n");
			break;
		case 3:
			printf("THU\n");
			break;
		case 4:
			printf("FRI\n");
			break;
		case 5:
			printf("SAT\n");
			break;
		case 6:
			printf("SUN\n");
			break;
	}
}
