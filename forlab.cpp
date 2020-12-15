// file: forlab.c

#include <stdio.h>
#define MAX 9

int main(void)
{
	printf("=== 구구단 출력 ===\n");
	for (int i = 2; i <= MAX; i++)
	{
		printf("%6d단 출력\n", i);
	}
	return 0;
}
/* 결과
=== 구구단 출력 ===
     2단 출력
     3단 출력
     4단 출력
     5단 출력
     6단 출력
     7단 출력
     8단 출력
     9단 출력

*/