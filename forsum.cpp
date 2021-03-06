// file: forsum.c
#include <stdio.h>

int main(void)
{
	int i, sum;

	for (i = 1, sum = 0; i <= 10; i++) //++i도 가능
		sum += i; // sum = sum + i;
	printf("1에서 10까지 합: %3d\n", sum);

	for (i = 1, sum = 0; i <= 10; )
		sum += i++; ;
	printf("1에서 10까지 합: %3d\n", sum);

	for (i = 0, sum = 0; i <= 9; ) 
		sum += ++i;
	printf("1에서 10까지 합: %3d\n", sum);

	for (i = 1, sum = 0; i <= 10; sum += i++);
	printf("1에서 10까지 합: %3d\n", sum);

	return 0;
}
/* 결과
1에서 10까지 합:  55
1에서 10까지 합:  55
1에서 10까지 합:  55
1에서 10까지 합:  55
*/