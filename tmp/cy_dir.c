#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[256];
	int i=0;
	int j;

	memset(str,0,256);
	printf("일기를 기록하세요: ");
	fgets(str,sizeof(str),stdin);

	while(str[i]!=NULL || str[i+1]!=NULL) {
		switch(str[i]) {
			case 'a':
				j=i+1;
				str[j]=NULL;
				str[j+1]=NULL;
				for(j=i+1; str[j+2]!=NULL || str[j+3]!=NULL; j++)
				{
					str[j]=str[j+2];
				}
				str[j]=NULL;
				break;
			case 'e':
				j=i+1;
				str[j]=NULL;
				str[j+1]=NULL;
				for(j=i+1; str[j+2]!=NULL || str[j+3]!=NULL; j++)
				{
					str[j]=str[j+2];
				}
				str[j]=NULL;
				break;
			case 'i':
				j=i+1;
				str[j]=NULL;
				str[j+1]=NULL;
				for(j=i+1; str[j+2]!=NULL || str[j+3]!=NULL; j++)
				{
					str[j]=str[j+2];
				}
				str[j]=NULL;
				break;
			case 'o':
				j=i+1;
				str[j]=NULL;
				str[j+1]=NULL;
				for(j=i+1; str[j+2]!=NULL || str[j+3]!=NULL; j++)
				{
					str[j]=str[j+2];
				}
				str[j]=NULL;
				break;
			case 'u':
				j=i+1;
				str[j]=NULL;
				str[j+1]=NULL;
				for(j=i+1; str[j+2]!=NULL || str[j+3]!=NULL; j++)
				{
					str[j]=str[j+2];
				}
				str[j]=NULL;
				break;
		}
		i++;
	}

	printf("복원한 창영이의 일기 내용: ");
	i=0;
	while(str[i]!=NULL || str[i+1]!=NULL) {
		printf("%c", str[i]);
		i++;
	}

	printf("%c", str[5]);
	return 0;
}
