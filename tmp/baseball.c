#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void makenum(int* num);
int compare(int* input, int* num);
void result(int* num, int strike, int cnt);
int restart_check();
int check_makenum(int* rn);
int main(){
	int rn[3];
	int n[3]={0,};
	int strike=0;
	int ball=0;
	int cnt=1;
	int re_chk=0;
	int chk_rnd=1;

	while(1){
		printf("==========Base Ball Game==========\n");
		printf("3's number match!!\n");
		printf("9 chance!! start!!\n");
		printf("==================================\n");

		while(chk_rnd!=0){
			makenum(rn);
			chk_rnd=check_makenum(rn);
		}
		printf("%d %d %d\n",rn[0],rn[1],rn[2]);

		while(cnt<10){

			printf("Input number : ");
			if(scanf("%d %d %d",&n[0],&n[1],&n[2])!=3){
				printf("error, again input please\n");
				fflush(stdin);
				continue;
			}

			if((n[0]==n[1] || n[0]==n[2] || n[1]==n[2]) || (n[0]<1||n[1]<1||n[2]<1||n[0]>10||n[1]>10||n[2]>10)){
				printf("error, again input please\n");
				continue;
			}

			strike=compare(n,rn);
			result(rn,strike,cnt);

			if(strike==3)
				break;

			cnt++;
		}

		re_chk=restart_check();
		if((strike==3||cnt==10) && (re_chk==1)){
			system("cls");
			re_chk=0;
			strike=0;
			cnt=1;
			ball=0;
			chk_rnd=1;
			continue;
		}
		else
			break;
		printf("\n");

	}
	return 0;
}

void makenum(int* num){
	srand(time(NULL));
	rand();rand();rand();
	srand(rand());
	int i,j;

	for(i=0;i<3;i++){
		num[i]=rand()%(9-1+1)+1;
	}
}
int compare(int* input, int* num){
	int i,j;
	int strike=0, ball=0;

	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(input[i]==num[i]){
				strike++;
				break;
			}
			else if(input[i]==num[j])
				ball++;
		}
	}

	printf("strike : %d, ball : %d\n",strike,ball);

	return strike;
}
void result(int* num, int strike, int cnt){
	if(strike==3){
		if(cnt<=2)
			printf("Perfect!!!! in second round!!!\n");
		else if(cnt<=5)
			printf("WoW 5 round~~\n");
		else if(cnt<=9)
			printf("oh....narrowly beaten in 9 round win...\n");
	}
	else
		printf("%d chance remain\n",9-cnt);


	if(cnt==10)
		printf("You lose\n");

	if(strike==3 || cnt==10)
		printf("Answer is %d, %d, %d. \n",num[0],num[1],num[2]);
}

int restart_check(){
	char select='n';

	fflush(stdin);
	printf("Restart Again ??(Yes : 'y', No : 'n') : ");
	scanf("%c",&select);

	if(select=='y')
		return 1;
	else if(select == 'n')
		return 0;
	else{
		printf("\n");
		return restart_check();
	}
}
int check_makenum(int* rn){
	if(rn[0]==rn[1] || rn[0]==rn[2]||rn[1]==rn[2])
		return 1;
	else
		return 0;
}

