// file: continuelab.c

#include <stdio.h>

int main(void)
{
	const int MAX = 15;

	printf("1���� %d���� ���� �߿��� 5�� ������ �������� �ʴ� ��\n", MAX);
	for (int i = 1; i <= MAX; i++)
	{
		if (!(i % 5))
			continue;
		printf("%3d", i);
	}
	puts("");

	return 0;
}
/* ���
1���� 15���� ���� �߿��� 5�� ������ �������� �ʴ� ��
  1  2  3  4  6  7  8  9 11 12 13 14
*/