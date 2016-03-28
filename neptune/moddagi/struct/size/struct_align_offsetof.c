#include <stdio.h>
#include <stddef.h>

#pragma pack(push, 1)
typedef struct PacketHeader{
	char flags;
	int seq;
}Packet;
#pragma pack(pop)

int main(){
	printf("%d\n",offsetof(Packet, flags));
	printf("%d\n",offsetof(Packet, seq));

	return 0;
}