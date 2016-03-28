#include <stdio.h>

#pragma pack(push, 1)
typedef struct Packet{
	char c1;
	char c2;
	char c3;
}PACKET;
#pragma pack(pop)

int main()
{
    struct Packet pkt;

    printf("%d\n", sizeof(pkt));

    return 0;
}