// file: loops.c
#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main(void)
{
	int input, sum, i, j;

	do
	{
		printf("���� ���� �Ǵ� 0(����)�� �Է�: ");
		scanf("%d", &input);

		for (i = 1; i <= input; i++)
		{
			for (j = 1, sum = 0; j <= i; j++)
			{
				printf("%d", j);
				j == i ? printf(" = ") : printf(" + ");
				sum += j;
			}
			printf("%d\n", sum);
		}
	} while (input > 0);

	puts("�����մϴ�.");

	return 0;
}
/* ���
���� ���� �Ǵ� 0(����)�� �Է�: 7
1 = 1
1 + 2 = 3
1 + 2 + 3 = 6
1 + 2 + 3 + 4 = 10
1 + 2 + 3 + 4 + 5 = 15
1 + 2 + 3 + 4 + 5 + 6 = 21
1 + 2 + 3 + 4 + 5 + 6 + 7 = 28
���� ���� �Ǵ� 0(����)�� �Է�: 3
1 = 1
1 + 2 = 3
1 + 2 + 3 = 6
���� ���� �Ǵ� 0(����)�� �Է�: 0
�����մϴ�.
*/