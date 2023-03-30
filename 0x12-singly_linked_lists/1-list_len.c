#include "lists.h"

/**
 * list_len - Function that returns then number of elements in a list.
 * @h: singly linked list.
 * Return: number of elements in the list.
 */

size_t list_len(const list_t *h)
{
	size_t khalifa;

	khalifa = 0;
	while (h != NULL)
	{
		h = h->next;
		khalifa++;
	}
	return (khalifa);
}
