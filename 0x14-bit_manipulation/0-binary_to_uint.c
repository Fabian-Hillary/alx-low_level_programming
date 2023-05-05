#include "main.h"
#include <stdio.h>
#include <string.h>
#include <math.h>
/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string containing the binary number
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int decimal = 0;
	int len = strlen(b);

	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] == '1')
		{
			decimal += pow(2, len - i - 1);
		}
		else if (b[i] != '0')
		{
			return (0);
		}
	}

	return (decimal);
}
