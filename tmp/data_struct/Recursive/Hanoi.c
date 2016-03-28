#include <stdio.h>

void Hanoi(int num, char from, char by,char to){
	if(num==1)
		printf("circle 1 %c to %c moved\n",from,to);
	else{
		Hanoi(num-1,from,to,by);
		printf("circle %d's %c to %c moved\n",num,from,to);
		Hanoi(num-1,by,from,to);
	}
}
int main(){
	int i;
	printf("Input num : ");
	scanf("%d",&i);
	Hanoi(i, 'A', 'B','C');
	return 0;
}
