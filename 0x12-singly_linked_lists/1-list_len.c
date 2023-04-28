#include "lists.h"
/**
 * list_len - finds the number of elements in a linked
 * list_t list.
 * @k: the linked list_t list
 * Return: the number of elements in k.
 */
size_t list_len(const list_t *k)
{
	size_t elements = 0;

	while (k)
	{
		elements++;
		k = k->next;
	}

	return (elements);
}
