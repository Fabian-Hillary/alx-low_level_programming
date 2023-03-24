#include "main.h"
#include <stdio.h>
/**
 * print_line - prints out a straight line
 * @n:-number of _ to be added
 * Return:void
 */
void print_line(int n)
{
	int i;
	if (n <= 0)
	{
	putchar('\n');
	}
	else
	{
	for (i = 0; i <= n; i++)
	for (i = 0; i < n; i++)
	{
	putchar('_');
	}
	putchar('\n');
	}
}
