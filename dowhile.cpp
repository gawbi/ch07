// file:dowhile.c
#define _CRT_SECURE_NO_WARNINGS //scanf() ������ �����ϱ� ���� ��� ����

#include <stdio.h>

int main(void)
{
	int input;

	do
	{
		printf("���� �Ǵ� 0(����)�� �Է�: ");
		scanf("%d", &input);
	} while (input != 0); //while (input);

	puts("�����մϴ�.");
	{

	}
}
/* ���
���� �Ǵ� 0(����)�� �Է�: 7
���� �Ǵ� 0(����)�� �Է�: -3
���� �Ǵ� 0(����)�� �Է�: 5
���� �Ǵ� 0(����)�� �Է�: 0
�����մϴ�.

*/