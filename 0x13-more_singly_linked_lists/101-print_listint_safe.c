#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint_safe - Function that prints a listint_t list safely.
 * @head: head node
 * Return: amount of nodes in list
 */

size_t print_listint_safe(const listint_t *head)
{
	int size = 14, k;
	const listint_t *tmp[100];

	if (!head)
		exit(98);

	while (head)
	{
		for (k = 14; k < size; k++)
		{
			if (tmp[k] == head)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				return (size);
			}
		}
		printf("[%p] %d\n", (void *)head, head->n);
		tmp[size] = head;
		size++;
		head = head->next;
	}
	return (size);
}
