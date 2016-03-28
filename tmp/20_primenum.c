#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "inttypes.h"
#include <assert.h>
using namespace std;


/*  20자리의 랜덤한 정수를 구하고 자릿수를 늘려가며 소수인지 검사하는 프로그램
 *  예( 숫자가 123456789일시 1, 12, 123, 1234 ... 123456789, 2, 23, 234 ... 789
 *  , 8, 89, 9식으로 소수검사	*/

typedef unsigned long long int Unt; // 자료형의 이름 축소

Unt complex(int str[], int i, int standard, int count=-1); // 19자리 이하의 숫자 정수로 변환하는 함수
void Prime(Unt prime[], int str[]); // 소수 검사 함수
void scomplex(int str[]); // 20자리 이상의 숫자 소수 검사 함수
int compare(int str[], int ptr[], int i); // 20자리 이상의 숫자 비교 함수



int main(void) {

	int str[20] = { 0, }; // 20자리의 랜덤 정수를 저장할 배열
	Unt prime[100]= {0, }; //소수를 저장할 배열


	printf("20자리의 정수: ");
	for (int i = 0; i < 20; i++) { // 20자리 랜덤 정수 초기화
		str[i] = rand() % 10;
		printf("%d", str[i]);//20자리 랜덤 정수 출력


	}

	Prime(prime, str);// 자릿수를 늘려가며 소수 검사

	return 0;



}

void Prime(Unt prime[], int str[]) {

	Unt SS = 0; // 20자리 숫자열을 정수로 변환해 저장하는 곳
	Unt y; // 소수 구할때 사용되는 나누는 숫자
	for (int j = 0; j < 20; j++) {
		for (int i = 0; i < 20-j; i++) {

			if (i == 19) {

				scomplex(str);
			}

			SS = complex(str, i+j, j);
			cout << "SS의 값" << SS << endl;
			for (y = 2; y < SS; y++) {
				if (SS % y == 0)
					break;
			}
			cout << "나눈 최종 값" << y << endl;
			cout << "소수인지 아닌지 비교중" << endl;
			if (y == SS) {
				prime[i] = SS;
				cout << SS <<"는 소수입니다." << endl;
			}
		}

	}


}

Unt complex(int str[],int i, int standard, int count) { // 20자리 숫자열 정수로 변환하는 함수


	Unt val = 1;
	if (i < standard)
		return 0;

	count++;


	if (count > 0) {
		for (int y = 0; y < count; y++)
			val*=10;

	}

	return (str[i]*val + complex(str, i- 1, standard, count)); // str[2] = {3, 7, 1} 문자열을 정수화할 경우, 1(str[2]) + 7(str[1])*10 + 3(str[0])*100 + 0(if 조건문때문에) = 371로 정수화된다.


}

void scomplex(int vtr[]) {

	int x = 0; // 3의 배수법칙을 적용할 변수
	int Str[20] = { 0, };
	int ptr[20] = { 0, }; // 20자리 이상의 나눗셈을 할 때 사용될 변수
	ptr[19] = 3;
	Unt XX; // 약수가 Unt형 변수일시 20자리 정수를 Unt형 변수로 저장하는 변수
	Unt y;
	Unt z = 0;

	int value; // value가 20일시 소수
	int opt; // 연산할 옵션 값

	int S = 19; // 나눌 값을 정수화 할때 쓰이는 인덱스



	for (int i = 0; i < 20; i++) {
		x += vtr[i];
	}

	if (vtr[19] % 2 == 0)
		printf("이것은 소수가 아닙니다.");
	else if (x % 3 == 0) {
		printf("이것은 소수가 아닙니다.");
	}

	else if (vtr[19] % 5 == 0)
		printf("이것은 소수가 아닙니다.");


	else {
		while (1) {

			ptr[1]++;
			z++;
			for (int i = 0; i < 20; i++) {
				Str[i] = vtr[i];
			}

			if (z <= 9999999999999999999) {
				// 약수가 Unt 범위내일 경우
				// 				for (int q = 1; q < 20; q++) { // 약수 값 증가
				// 									if (ptr[q] == 10 && q != 19) {
				// 															ptr[q + 1]++;
				// 																					ptr[q] = 0;
				// 																											S = (q + 1);
				// 																																}
				// 																																					else if (ptr[q] == 10 && q == 19) {
				// 																																											ptr[q] = 0;
				// 																																																}
				// 																																																				}
				// 																																																								for (int i = 19; i >= 0; i--) {
				// 																																																													Str[i] -= ptr[i];
				//
				// 																																																																		for (int r = i; r > 0; r--) // i는 19에서 시작
				// 																																																																								if (Str[r] < 0) {
				// 																																																																														Str[r - 1]--; // 20자리 이상의 정수의 뺄셈 연산
				// 																																																																																				Str[r] += 10;
				// 																																																																																										if (Str[0] == 0) {
				// 																																																																																																	XX = complex(Str, 18, 1); // 20자리의 정수를 unsigned long long int 범위로 줄여 정수로 전환
				// 																																																																																																							}
				// 																																																																																																													}
				// 																																																																																																																	}
				//
				// 																																																																																																																					y = complex(ptr, S, 1);
				// 																																																																																																																									if (XX % y == 0)
				// 																																																																																																																														break;
				// 																																																																																																																																	}
				//
				//
				// 																																																																																																																																				// 약수가 Unt 범위를 넘어섰을 경우
				//
				// 																																																																																																																																							else if (z > 9999999999999999999) {
				// 																																																																																																																																											while (1) {}
				// 																																																																																																																																															ptr[0]++;
				// 																																																																																																																																																			for (int q = 0; q < 20; q++) { // 약수 값 증가
				// 																																																																																																																																																								if (ptr[q] == 10 && q != 19) {
				// 																																																																																																																																																														ptr[q + 1]++;
				// 																																																																																																																																																																				ptr[q] = 0;
				// 																																																																																																																																																																									}
				// 																																																																																																																																																																														else if (ptr[q] == 10 && q == 19) {
				// 																																																																																																																																																																																				ptr[q] = 0;
				// 																																																																																																																																																																																									}
				//
				// 																																																																																																																																																																																														opt = compare(Str, ptr, 0);
				//
				// 																																																																																																																																																																																																			switch (opt) {
				// 																																																																																																																																																																																																								case 1: // ptr은 str의 약수
				// 																																																																																																																																																																																																														for (int i = 0; i < 20; i++) {
				// 																																																																																																																																																																																																																					if (vtr[i] == ptr[i])
				// 																																																																																																																																																																																																																													value++;
				// 																																																																																																																																																																																																																																				else
				// 																																																																																																																																																																																																																																												printf("소수가 아닙니다.\n");
				// 																																																																																																																																																																																																																																																		}
				// 																																																																																																																																																																																																																																																								if (value == 20) {
				// 																																																																																																																																																																																																																																																															for (int i = 0; i < 20; i++)
				// 																																																																																																																																																																																																																																																																							printf("%d", vtr[i]);
				// 																																																																																																																																																																																																																																																																														printf("는 소수입니다.\n");
				// 																																																																																																																																																																																																																																																																																				}
				// 																																																																																																																																																																																																																																																																																										break;
				// 																																																																																																																																																																																																																																																																																															case 2: // ptr은 str의 약수가 아님
				// 																																																																																																																																																																																																																																																																																																					break;
				// 																																																																																																																																																																																																																																																																																																										case 3: // str에서 ptr을 빼야 함
				// 																																																																																																																																																																																																																																																																																																																assert(1);
				// 																																																																																																																																																																																																																																																																																																																						break;
				// 																																																																																																																																																																																																																																																																																																																											}
				//
				//
				// 																																																																																																																																																																																																																																																																																																																															}
				// 																																																																																																																																																																																																																																																																																																																																		}
				// 																																																																																																																																																																																																																																																																																																																																				}
				//
				//
				// 																																																																																																																																																																																																																																																																																																																																					}
				//
				// 																																																																																																																																																																																																																																																																																																																																					}
			//
			//
			//
			// 																																																																																																																																																																																																																																																																																																																																					int compare(int str[], int ptr[], int i) {
			//
			// 																																																																																																																																																																																																																																																																																																																																						if (i == 19 && ptr[i] == str[i]) {
			// 																																																																																																																																																																																																																																																																																																																																								printf("소수가 아닙니다.\n");
			// 																																																																																																																																																																																																																																																																																																																																										return 1; // ptr은 str의 약수
			// 																																																																																																																																																																																																																																																																																																																																											}
			//
			// 																																																																																																																																																																																																																																																																																																																																												else if (ptr[i] > str[i]) {
			//
			// 																																																																																																																																																																																																																																																																																																																																														return 2; // ptr은 str의 약수가 아님
			// 																																																																																																																																																																																																																																																																																																																																															}
			//
			// 																																																																																																																																																																																																																																																																																																																																																else if (ptr[i] = str[i] && i != 19) {
			// 																																																																																																																																																																																																																																																																																																																																																		return compare(ptr, str, i - 1);
			// 																																																																																																																																																																																																																																																																																																																																																			}
			//
			// 																																																																																																																																																																																																																																																																																																																																																				else if (ptr[i] < str[i]) {
			// 																																																																																																																																																																																																																																																																																																																																																						for (int q = 19; q >= 0; q++) {
			// 																																																																																																																																																																																																																																																																																																																																																									str[q] -= ptr[q];
			// 																																																																																																																																																																																																																																																																																																																																																												for (int w = 19; w >= 0; w--) { // 뺄셈 진행
			// 																																																																																																																																																																																																																																																																																																																																																																if (str[w] < 0 && w != 0) { //음수가 될 경우 다음 자릿 수에 1을 빼고 양수로 전환함
			// 																																																																																																																																																																																																																																																																																																																																																																					str[w] += 10;
			// 																																																																																																																																																																																																																																																																																																																																																																										str[w - 1]--;
			// 																																																																																																																																																																																																																																																																																																																																																																														}
			//
			// 																																																																																																																																																																																																																																																																																																																																																																																		if (str[w] < 0 && w == 0) {
			// 																																																																																																																																																																																																																																																																																																																																																																																							printf("계산이 잘못됬습니다. 프로그램을 종료합니다.\n");
			// 																																																																																																																																																																																																																																																																																																																																																																																												return 3;
			// 																																																																																																																																																																																																																																																																																																																																																																																																}
			// 																																																																																																																																																																																																																																																																																																																																																																																																				compare(str, ptr, 19);
			// 																																																																																																																																																																																																																																																																																																																																																																																																							}
			// 																																																																																																																																																																																																																																																																																																																																																																																																									}
			// 																																																																																																																																																																																																																																																																																																																																																																																																										}
			// 																																																																																																																																																																																																																																																																																																																																																																																																										}
