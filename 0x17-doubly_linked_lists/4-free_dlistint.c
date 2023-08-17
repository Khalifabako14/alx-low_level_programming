#include "lists.h"

/**
 * free_dlistint - Function that deletes elements of a list
 * @head: pointer to the head
 * Return: none
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	if (head != NULL)
		while (head->prev != NULL)
			head = head->prev;

	while ((tmp = head) != NULL)
	{
		head = head->next;
		free(tmp);
	}
}
