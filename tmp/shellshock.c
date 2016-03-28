#include <stdio.h>
int main(){
	setresuid(getegid(), getegid(), getegid());
	setresgid(getegid(), getegid(), getegid());
	system("/bin/bash -c 'echo shock_me'");
	return 0;
}

