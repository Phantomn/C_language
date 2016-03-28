#include <stdio.h>

int main(){
	int life=100;
	double cigarret = 3.80;
	double reduced_life = 1.27*20;
	double real_life=life-20 - reduced_life;
	int lefted_life = 20+real_life;

	printf("단축된 수명 %.1lf년, 남은 수명 : %.1lf년 앞으로 %d살까지 살 수 있습니다\n",reduced_life, real_life,lefted_life);

	return 0;
}
