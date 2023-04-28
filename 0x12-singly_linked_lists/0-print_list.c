#include "lists.h"
#include <stdio.h>
/**
 * print_list - prints all the elements of a list_t list.
 * @j: The list_t list.
 * Return: the total number of nodes in j;
 */
size_t print_list(const list_t *j)
{
	size_t nodes = 0;

	while (j)
	{
		if (j->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", j->len, j->str);

		nodes++;
		j = j->next;
	}

	return (nodes);
}
