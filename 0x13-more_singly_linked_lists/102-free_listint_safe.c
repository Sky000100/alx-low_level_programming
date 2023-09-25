#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t list, even if it has a loop.
 * @h: Pointer to a pointer to the head of the list.
 *
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t node_count = 0;
	listint_t *current = *h;
	listint_t *next = NULL;

	while (current)
	{
		node_count++;
		next = current->next;

		if (current <= next)
		{
			*h = NULL;
			return (node_count);
		}

		free(current);
		current = next;
	}

	*h = NULL;
	return (node_count);
}

