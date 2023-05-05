#include "main.h"
#include <stdio.h>
#include <math.h>

/**
 * set_bit - sets the value of a bit at a given index to 0
 * @n: a pointer to the bit
 * @index: description of the parameter
 * Return: description of the return value
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n ^= (1 << index);

	return (1);
}
