#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *Description:main-prints out numbers of base sixteen
 *Return:Always successful
*/
int main(void)
{
	int i;

	for (i = 0; i <= 16 ; i++)
	for (i = 0; i < 16 ; i++)
	{
		if (i < 10)
		{
		putchar(i + '0');
		}
		else
		{
		putchar(i - 10 + 'a');
		}
	}
	putchar('\n');
	return (0);
}
