#include "lists.h"

/**
 * free_listint_safe - Function that frees a linked list
 * @h: pointer to the first node in the linked list
 * Return: number of elements in the freed list
 */

size_t free_listint_safe(listint_t **h)
{
	size_t kb = 0;
	int n;
	listint_t *temp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		n = *h - (*h)->next;
		if (n > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			kb++;
		}
		else
		{
			free(*h);
			*h = NULL;
			kb++;
			break;
		}
	}

	*h = NULL;

	return (kb);
}
