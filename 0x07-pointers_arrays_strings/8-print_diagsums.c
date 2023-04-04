#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Entry point
 * @a: input
 * @size: input
 * Return: Always 0 (Success)
 */
void print_diagsums(int *a, int size)
{
	int n, sum1 = 0, sum2 = 0;

	for (n = 0; n < size; n++)
	{
	sum1 += a[(size + 1) * n]; /* Accumulate diagonal sum */
	sum2 += a[(size - 1) * (n + 1)]; /* Accumulate diagonal sum */
	}
	printf("%d, %d\n", sum1, sum2);
}
