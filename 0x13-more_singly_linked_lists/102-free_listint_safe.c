#include "lists.h"
#include <stdio.h>
/**
 * free_listint_safe - frees a listint_t list, handling loops
 * @h: pointer to the head of the list
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t size = 0;
	listint_t *current, *next;

	if (h == NULL || *h == NULL)
		return (0);

	current = *h;
	while (current != NULL)
	{
		size++;
		next = current->next;

		current->next = NULL;

		free(current); /*free the current node */
		if (next == *h)
		{
			*h = NULL;
			return (size);
		}
		current = next;
	}

	*h = NULL;
	return (size);
}

