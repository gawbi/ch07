// file: goto.c

#include <stdio.h>

int main(void)
{
	int count = 1;

loop :
	printf("%3d", count);
	if (++count <= 10)
		goto loop;

	printf("\n프로그램을 종료합니다.\n");
	
	return 0;
}
/* 결과
  1  2  3  4  5  6  7  8  9 10
프로그램을 종료합니다.
*/