// file: forsum.c
#include <stdio.h>

int main(void)
{
	int i, sum;

	for (i = 1, sum = 0; i <= 10; i++) //++i�� ����
		sum += i; // sum = sum + i;
	printf("1���� 10���� ��: %3d\n", sum);

	for (i = 1, sum = 0; i <= 10; )
		sum += i++; ;
	printf("1���� 10���� ��: %3d\n", sum);

	for (i = 0, sum = 0; i <= 9; ) 
		sum += ++i;
	printf("1���� 10���� ��: %3d\n", sum);

	for (i = 1, sum = 0; i <= 10; sum += i++);
	printf("1���� 10���� ��: %3d\n", sum);

	return 0;
}
/* ���
1���� 10���� ��:  55
1���� 10���� ��:  55
1���� 10���� ��:  55
1���� 10���� ��:  55
*/