#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - function that allocates memory for an array
 * @nmemb: number of elements in the array
 * @size: size of each element in bytes
 * Return :On success, a pointer to the allocated memory is returned.
 *         if  either nmemb or size is 0, then _calloc() returns NULL.
 *         if there is not enough memory available to allocate the requested
 *         if  block of memory, then _calloc() returns NULL.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i = 0, l = 0;
	char *p;

	if (nmemb == 0 || size == 0)
	return (NULL);

	l = nmemb * size;
	p = malloc(l);

	if (p == NULL)
	return (NULL);

	while (i < l)
	{
	p[i] = 0;
	i++;
	}
	return (p);
}
