// 주사위 3개 랜덤 1~6
// 같은 눈이 3개 일 시에 10,000 + (같은눈)*1000
// 같은 눈이 2개 일 시에 1000+(같은눈)*100
// 모두 다른 눈일 시에 (가장 큰눈)*100
// 
// 주사위 3개 입력 a, b ,c
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int a, b, c;
	int reward;
	int i;
	int seed;
	seed = rand()%(1024-1+1)+1;
	srand(seed);
	printf("c를 입력하세요 : ");
	scanf("%d",&c);
	for(i=1;i<=1024;i++){
		if(1/*seed >= 1 && seed <= 1024*/){
			printf("주사위 3개를 입력 하세요 : ");

			a = rand()%(6-1+1)+1;
			b = rand()%(6-1+1)+1;

			printf("%d %d %d %d\n", a, b, c, seed);
			if(a == b && a == c && b  == c){
				reward = 10000 + (a * 1000);
				printf("%d, seed = %d\n", reward, seed);
				exit(0);
			}
			/*else if(a == b || a == c || b == c){
				if(a == b){
					reward = 1000 + (a * 100);
					printf("%d\n",reward);
					exit(0);
				}
				if(a == c){
					reward = 1000 + (a * 100);
					printf("%d\n",reward);
					exit(0);
				}
				if(c == b){
					reward = 1000 + (b * 100);
					printf("%d\n",reward);
					exit(0);
				}
			}
			if(((!(a == b)) && (!(a == c)) && (!(b == c)))){
				if(a > b){
					if(a > c){
						reward = a * 100;
						printf("%d\n",reward);
						exit(0);
					}
					else{
						reward = c * 100;
						printf("%d\n",reward);
						exit(0);
					}
				}
				if(b > a){
					if(b > c){
						reward = b * 100;
						printf("%d\n",reward);
						exit(0);
					}
					else{
						reward = c * 100;
						printf("%d\n",reward);
						exit(0);
					}
				}
			}*/
		}
	}
	printf("you very terrible\n");
	exit(0);
}			
