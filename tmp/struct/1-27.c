#include <stdio.h>

union point{
	int x;
	int y;
};
struct student{
	int a;
	int b;
};

int main(){
	printf("%d %d\n",sizeof(union point), sizeof(struct student));

	return 0;
}
