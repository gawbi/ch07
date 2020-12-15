//file : cel2far3
#include <stdio.h>

int main(void)
{
	double celcius = 12.46;

	printf(" ¼·¾¾(C) È­¾¾(F) \n");
	printf("------------------------\n");
	printf("%8.2lf %8.2lf\n", celcius, 9.0 / 5 * celcius + 32);
	celcius += 10;
	printf("%8.2lf %8.2lf\n", celcius, 9.0 / 5 * celcius + 32);
	celcius += 10;
	printf("%8.2lf %8.2lf\n", celcius, 9.0 / 5 * celcius + 32);
	celcius += 10;

	return 0;
}
/*
 ¼·¾¾(C) È­¾¾(F)
------------------------
   12.46    54.43
   22.46    72.43
   32.46    90.43
*/