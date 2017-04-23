#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>
#include <sys/socket.h>
void error_handling(char *message);

int main(int argc, char* argv[]){
	int serv_sock;
	int clnt_sock;

	struct sockaddr_in serv_addr;
	struct sockaddr_in clnt_addr;
	socklen_t clnt_addr_size;

	char message[] = "Hello World!";

	if(argc != 2){
		printf("Usage : %s <port>\n", argv[0]);
		exit(1);
	}

	serv_sock=socket(PF_INET, SOCK_STREAM, 0);
	/*socket(int domain, int type, int protocol);
	 = create socket and return
		int domain : select internet communicate or between system process communicate
			PF_INET, AF_INET = Use IPv4 protocol
			PF_INET6 = Use IPv6
			PF_LOCAL, AD_UNIX = Between system process communicate
			PF_PACKET = Use "Low level socket interface"
			PF_IPX = Use IPX
		int type : select data type
			SOCK_STREAM = Use TCP
			SOCK_DGRAM = Use UDP
		int protocol : variable to specific protocol, nomally use 0
		(-1 : fail, -1 other = socket ID)*/
	if(serv_sock == -1)
		error_handling("socket() error");

	memset(&serv_addr, 0 , sizeof(serv_addr));
	serv_addr.sin_family = AF_INET; // IPv4
	serv_addr.sin_addr.s_addr = htonl(INADDR_ANY);
	/*"host to network long"
	from host, big endian u_long type value convert
	INADDR_ANY = insert to auto find server IP
	*/
	serv_addr.sin_port = htons(atoi(argv[1]));//host to network short

	if(bind(serv_sock, (struct sockaddr*) &serv_addr, sizeof(serv_addr)) == -1)
	/*int bind(int sockfd, struct sockaddr* myaddr, socklent_t addrlen);
	= Set IP/PORT the socket
		int sockfd : socket descriptor

		struct sockaddr* myaddr : diff AF_INET | AF_UNIX
		if AF_INET == use struct sockaddr_in
		struct sockaddr_in {
			sa_family_t			sin_family;	// Addr family
			unsigned short int 	sin_port;	// Port number
			struct in_addr		sin_addr;	// Internet Addr
		}
		if AF_UNIX == use struct sockaddr
		struct sockaddr{
			sa_family_t	sa_family; 	// addr family, AF_xxx
			char		sa_data[14];// 14 byte of protocol addr
		}

		socklen_t addrlen : sizeof(struct myaddr)*/
		error_handling("bind() error");

	if(listen(serv_sock, 5) == -1)
	/*listen(int s, int backlog);
	= Set wait through socket
		int s : socket descriptor
		int backlog(request connect) : waiting message queue number
	*/
		error_handling("listen() error");

	clnt_addr_size = sizeof(clnt_addr);
	clnt_sock = accept(serv_sock, (struct sockaddr*)&clnt_addr, &clnt_addr_size);
	/*accept(int s, struct sockaddr* addr, socklen_t* addrlen);
	= accept client connect request and create private socket to client
		int s : socket descriptor
		struct sockaddr* addr : client addr info pointer
		socklen_t addrlen : sizeof(&struct sockaddr* addr)
	*/
	if(clnt_sock == -1)
		error_handling("accept() error");

	write(clnt_sock, message, sizeof(message));
	/*write(int fd, const void* buf, size_t n);
	= write to fd
		int fd : file descriptor
		void* buf : buffer
		size_t n : writing byte the number

		return val - success =  ssize_t number
					 fail = -1
	*/
	close(clnt_sock);
	close(serv_sock);
	return 0;
}
void error_handling(char *message){
	fputs(message, stderr);
	fputc('\n', stderr);
	exit(1);
}