#include "function_pointers.h"
/**
 * int_index - index of the integers
 * @array: The array of the integers
 * @size:  the number of elements in the array array
 * @cmp: a pointer to the function to be used to compare values
 * Return: the index of the first element for
 * which the cmp function does not return 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0)
	{
	if (array != NULL && cmp != NULL)
	{
	while (i < size)
	{
	if (cmp(array[i]))

	i++;
	}
	}
	}

	return (-1);
}
