// file:break.c
#define _CRT_SECURE_NO_WARNINGS //scanf() ������ �����ϱ� ���� ��� ����

#include<stdio.h>

int main(void)
{
	int input;

	while (1)
	{
		printf("����[����, 0(����), ���]�� �Է� �� [Enter] :");
		scanf("%d", &input);
		printf("�Է��� ���� %d\n", input);
		if (input == 0)
			break;
	}

	puts("�����մϴ�.");

	return 0;
}
/* ���
����[����, 0(����), ���]�� �Է� �� [Enter] :10
�Է��� ���� 10
����[����, 0(����), ���]�� �Է� �� [Enter] :-5
�Է��� ���� -5
����[����, 0(����), ���]�� �Է� �� [Enter] :0
�Է��� ���� 0
�����մϴ�.
*/
