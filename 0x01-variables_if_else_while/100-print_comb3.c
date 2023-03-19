#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *Description:main- prints out combination of Nos separated with coma and space
 *Return:always successful
*/
int main(void)
{
	int i, k;

	for (i = 0; i < 10; i++)
	{
		for (k = i + 1; k < 10 ; k++)
		{
			putchar(i + '0');
			putchar(k + '0');
			if (i != 8 || k != 9)
			{
			putchar(',');
			putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
