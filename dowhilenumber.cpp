// file:dowhilenumber.c

#include<stdio.h>
#define MAX 5

int main(void)
{
	int n = 1;

	do
	{
		printf("%d\n", n++);
	} while (n <= MAX);

	printf("\n제어변수 n => %d\n", n);

	return 0;
}
/* 결과
1
2
3
4
5

제어변수 n => 6
*/