#include <stdio.h>
#include <stddef.h>

typedef struct PaketHeader {
	char flags;
	int seq;
}Packet;

int main(){
	printf("%d\n",offsetof(struct PaketHeader, flags));
	printf("%d\n",offsetof(struct PaketHeader, seq));

	return 0;
}