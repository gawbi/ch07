// file: forcel2far3.c

#include <stdio.h>
#define MAX 3
#define INCREMENT 10

int main(void)
{
	double celcius = 12.46;

	printf(" ����(C) ȭ��(F) \n");
	printf("-------------------\n");

	for (int i = 1; i <= MAX; i++, celcius += INCREMENT)
	{
		printf("%8.2lf %8.2lf\n", celcius, 9.0 / 5 * celcius + 32);

	}
	return 0;

}
/*
 ����(C) ȭ��(F)
-------------------
   12.46    54.43
   22.46    72.43
   32.46    90.43
*/
