#include "main.h"
#include <stdio.h>
/**
 * print_square - prints out a square
 * @size: -the size of square to be printed
 * Return:void
 */
void print_square(int size)
{
	int x, y;

	if (size <= 0)
	{
	putchar('\n');
	}
	else
	{
	for (x = 0; x < size; x++)
	{
	for (y = 0; y < size; y++)
	{
	putchar(35);
	}
	putchar('\n');
	}
	}
}
