#include <stdio.h>

#pragma pack(push, 1)

typedef struct PackHeader{
	char flags;
	int seq;
}Packet;
#pragma pack(pop)

int main(){
	Packet header;

	printf("%d\n", sizeof(header.flags));
	printf("%d\n", sizeof(header.seq));
	printf("%d\n", sizeof(header));

	return 0;
}