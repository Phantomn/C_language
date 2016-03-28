#include <stdio.h>
#include <signal.h>

void handler(int signo){printf("\nCtrl+Z\n");}

struct sigaction act_new;
struct sigaction act_old;

int main(){
	FILE* p1;
	FILE* p2;
	int input=0;
	
	act_new.sa_handler=handler;
	sigemptyset(&act_new.sa_mask);
	sigaction(SIGTSTP,&act_new,&act_old);


	p1=fopen("data1.txt","r");
	p2=fopen("data2.txt","w");


	puts("Input data from file");
	while(input != EOF){
		input=fgetc(p1);
		fputc(input,p2);
		fputc(input,stdout);
	}
	fclose(p1);
	fclose(p2);


	return 0;
}
	
