// file: repetition.c
#include <stdio.h>

int main(void)
{
	//��� ������ ���ڿ��� �ܼ��� �ݺ�
	printf("C��� ����ֳ׿�!\n");
	printf("C��� ����ֳ׿�!\n");
	printf("C��� ����ֳ׿�!\n");

	int n = 1;
	//�������� 1�� ������Ű�鼭 ��� �ݺ�
	printf("%d\n", n++);
	printf("%d\n", n++);
	printf("%d\n", n++);
	printf("%d\n", n++);
	printf("%d\n", n++);

	return 0;
}
/* �����
C��� ����ֳ׿�!
C��� ����ֳ׿�!
C��� ����ֳ׿�!
1
2
3
4
5
*/