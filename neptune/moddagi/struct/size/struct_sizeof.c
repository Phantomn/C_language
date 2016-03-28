#include <stdio.h>

typedef struct PacketHeader{
	char flags;
	int seq;
}PACKET;

int main(){
	PACKET header;

	printf("%d\n",sizeof(header.flags));	//1
	printf("%d\n",sizeof(header.seq));		//4
	printf("%d\n",sizeof(header));			//8
	printf("%d\n",sizeof(struct PacketHeader));		//8

	return 0;
}