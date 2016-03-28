#include <stdio.h>

int main(){
	int buf1[5]={0xff,0x56,0x78,0xfa,0xf1};
	int buf2[5];
	int i;
	FILE* stream;
	stream=fopen("student.dat","wb");
	fwrite(buf1,sizeof(int),5,stream);
	fclose(stream);

	stream=fopen("student.dat","rb");
	fread(buf2,sizeof(int),5,stream);
	
	for(i=0;i<5;i++)
		printf("%x ",buf2[i]);
	printf("\n");

	fclose(stream);

	return 0;
}
