#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>
#include <sys/types.h>
#include <time.h>

int main(int argc, char* argv[]){
	int s;
	int len;
	char servName;
	int servPort;
	char* string;
	char buffer[256];
	struct sockaddr_in servAddr, clntAddr;
	int clntAddrLen;

	memset(&servAddr, 0, sizeof(servAddr));
	servAddr.sin_family = AF_INET;
	servAddr.sin_port = htons(9999);
	servAddr.sin_addr.s_addr = htonl(INADDR_ANY);

	if(s = socket(PF_INET, SOCK_DGRAM, 0) < 0){
		printf("Sock failed\n");
		exit(-1);
	}

	if((bind(s,(struct sockaddr*)&servAddr, sizeof(servAddr)) < 0)){
		printf("bind failed");
		exit(-1);
	}
	while(1){
		len = recv(s,buffer, sizeof(buffer), 0, (struct sockaddr*)&clntAddr, &clntAddrLen);

		send(s, buffer, len, 0, (struct sockaddr*)&clntAddr, sizeof(clntAddr));
	}
}