#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv){
	char *ptr;

	ptr = getenv(argv[1]);
	printf("%p\n",ptr);
	ptr+=(strlen(argv[0] - strlen(argv[2])))*2;
	printf("%s will be at %p\n", argv[1], ptr);
}
