// file:dowhile.c
#define _CRT_SECURE_NO_WARNINGS //scanf() 오류를 방지하기 위한 상수 정의

#include <stdio.h>

int main(void)
{
	int input;

	do
	{
		printf("정수 또는 0(종료)을 입력: ");
		scanf("%d", &input);
	} while (input != 0); //while (input);

	puts("종료합니다.");
	{

	}
}
/* 결과
정수 또는 0(종료)을 입력: 7
정수 또는 0(종료)을 입력: -3
정수 또는 0(종료)을 입력: 5
정수 또는 0(종료)을 입력: 0
종료합니다.

*/