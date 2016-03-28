#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    char text[31];
    int begin, end;
    int isPalindrome = true;
    char space = ' ';


    scanf("%[^\n]s", text);

    begin = 0;
    end = strlen(text)-1;

    while(begin<end){
        if(text[begin] != text[end]){
            if(text[begin] == space){
                begin++;
                continue;
            }
            else if(text[end] == space){
                end--;
                continue;
            }
            else{
                printf("%c %c\n",text[begin], text[end]);  // 단어의 처음과 끝을 비교, 거짓이면 플래그를 0으로 바꿈
                isPalindrome = false;
                break;
            }
        }
        begin++;
        end--;
    }
    printf("%d\n",isPalindrome);

    return 0;
}