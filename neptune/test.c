#include <stdio.h>
#include <sys/time.h>
#include <sys/types.h>
#include <unistd.h>

void shellout(void);

int main()
{
	char string[100];
	int check;
	int x = 0;
	int count = 0;

	fd_set fds;          //fd_set 구조체 fds 선언

	printf("Enter your command: ");

	fflush(stdout);     //출력버퍼를 비움

	while(1)
	{
		if(count >= 100)
			printf("what are you trying to do?\n");

		if(check == 0xdeadbeef) // check안에  0xdeadbeef가 입력되어 있을 시 shelldout()함수 실행
			shellout();
		else
		{
			FD_ZERO(&fds);  // fds의 소켓셋을 비움
			FD_SET(STDIN_FILENO,&fds); //소켓셋에 표준입력 fd number 추가

			if(select(FD_SETSIZE, &fds, NULL, NULL, NULL) >= 1)           // 이 부분에서 입력이 되는것으로 추정...
			{
				if(FD_ISSET(fileno(stdin),&fds))
				{
					read(fileno(stdin),&x,1);
					switch(x)
					{
						case '\r':                      //carrage return이나 이걸뭐라하더라 에....암튼 띄어쓰기 문자가 나오면 \a를 출력함
						case '\n':
							printf("\a");
							break;
						case 0x08:                     //0x8이 입력되면 count는 -1이 되고 아래 \b을 두번 출력
							count--;
							printf("\b \b");
							break;
						default:             //그게아닌 남은 모든것은 string의 count인덱스가 가리키는곳에 x의 값을 집어넣고 count증가
							string[count] = x;
							count++;
							break;
					}
				}
			}
		}
	}
}

void shellout(void)
{
	setreuid(3099,3099);
	execl("/bin/sh","sh",NULL);
}
