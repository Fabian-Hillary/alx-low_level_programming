#include "main.h"
#include <stdio.h>
/**
 * print_triangle - prints out triangles using #
 * @size : int to determine size of triangle
 * Return: void
 */
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	for (i = 0; i < size; i++)
	{
	putchar('\n');
	}
	else
	{
	for (i = 0; i < size; i++)
	for (j = 1; j < (size - i); j++)
	{
	putchar(' ');
	}
	for (j--; j < size; j++)
	{
	for (j = 1; j < (size - i); j++)
	{
	putchar(' ');
	}
	for (j--; j < size; j++)
	{
	putchar('#');
	}
	if (i < (size - 1))
	{
	putchar('\n');
	}
	}
	if (i < (size - 1))
	{
	putchar('\n');
	}
	}
	putchar('\n');
}
