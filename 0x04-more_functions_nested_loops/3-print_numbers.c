#include "main.h"
#include <stdio.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (putchar(c));
}

/**
 * print_numbers - prints out numbers from 0-9
 * Return: void
 */
void print_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
	_putchar(i + '0');
	i++;
	}
	_putchar('\n');
}
