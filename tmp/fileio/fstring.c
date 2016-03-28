#include <stdio.h>
#include <signal.h>
//SIGTSTP 20
//SIGINT 2
struct sigaction act_new;
struct sigaction act_old;
int input=0;

void handler(int signo){
	printf("\nCtrl+Z\n");	
	input=-1;
}

int main(){
	FILE* stream;
	char buf[50];
	act_new.sa_handler=handler;
	sigemptyset(&act_new.sa_mask);
	//sigaction(SIGTSTP,&act_new,&act_old);




	stream=fopen("data3.txt","w");
	if(stream==NULL)
		puts("file open error");


	puts("Input data");
	while(input!=EOF){
		sigaction(SIGTSTP,&act_new,&act_old);
		fgets(buf,sizeof(buf),stdin);
		fputs(buf,stream);
	}

	fclose(stream);

	return 0;
}
