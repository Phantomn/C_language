#include <stdio.h>

int main(){
	int hri, ver, hei;
	int area, vol;
	printf("Input hri, ver, hei : ");
	scanf("%d %d %d",&hri,&ver, &hei);

	area = (hri*ver)*2 + (hri*hei)*2 + (ver*hei)*2;
	vol = hri * ver * hei;

	printf("area : %d\n",area);
	printf("volume : %d\n",vol);
}