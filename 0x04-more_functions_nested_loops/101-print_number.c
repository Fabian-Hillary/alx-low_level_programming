#include "main.h"
#include <stdio.h>
/**
 *print_number-prints out an integer
 *@n: -number passed
 *Return:void
 */
void print_number(int n)
{
	unsigned int m, d, count;

	if (n < 0)
	{
	putchar(45);
	n = -n;
	m = n * -1;
	}
	else
	{
	m = n;
	}
	if (n / 10)
	{
	print_number(n / 10);
	}
	d = m;
	count = 1;

	while (d > 9)
	{
	d /= 10;
	count *= 10;
	}
	for (; count >= 1; count /= 10)
	{
	putchar(((m / count) % 10) + 48);
	}
	putchar(n % 10 + 48);
}
