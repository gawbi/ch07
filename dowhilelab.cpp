// file: forlab.c
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int input = 0, result = 0, digit = 0;
	int devider = 100;

	printf("양의 정수[100~999] 입력: ");
	scanf("%d", &input);
	result = input;
	do
	{
		digit = result / devider;
		result %= devider;
		printf("%3d단위 출력: %d\n", devider, digit);
		devider /= 10;
	} while (devider >= 1);

	return 0;
}
/* 결과
양의 정수[100~999] 입력: 853
100단위 출력: 8
 10단위 출력: 5
  1단위 출력: 3
*/