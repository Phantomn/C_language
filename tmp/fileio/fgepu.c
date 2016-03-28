#include <stdio.h>
#include <signal.h>


struct sigaction act_new;
struct sigaction act_old;

void handler(int signo){printf("\nCtrl+Z\n");}



int main(){
	FILE* stream;
	int file_state;
	int input=0;
	act_new.sa_handler=handler;
	sigemptyset(&act_new.sa_mask);


	sigaction(SIGTSTP, &act_new, &act_old);




	//Create file stream and file open
	stream=fopen("data1.txt","a");
	if(stream==NULL)
		puts("file open error");

	puts("Input data");
	while(input!=EOF){
		input=fgetc(stdin);
		fputc(input,stream);
	}

	//file close
	file_state=fclose(stream);
	if(file_state==EOF)
		puts("file close error");

	return 0;
}
