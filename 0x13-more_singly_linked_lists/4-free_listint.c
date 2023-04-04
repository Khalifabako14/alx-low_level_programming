#include "lists.h"

/**
 * free_listint - Function that prints free list
 * @head: pointer to the first node of the list
 * Return: nothing
 */

void free_listint(listint_t *head)
{
	listint_t *bako;

	/*iterate through each node in list*/
	while ((bako = head) != NULL)
	{
		/*set head as the next node*/
		head = head->next;
		free(bako);
	}
}
