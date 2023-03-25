#include "main.h"
#include <stdio.h>
/**
 *print_number-prints out an integer
 *@n: -number passed
 *Return: Nothing
 */
void print_number(int n)
{
	unsigned int k = n;

	if (n < 0)
	{
	n *= -1;
	k = n;
	putchar('-');
	}
	k /= 10;
	if (k != 0)
	print_number(k);
	putchar((unsigned int) n % 10 + '0');
}
