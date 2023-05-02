#include "lists.h"
#include <stdlib.h>

/**
 * free_listint -function
 * @head: pointer
 */
void free_listint(listint_t *head)
{
	listint_t *curr = head;

	while (curr != NULL)
	{
		listint_t *next = curr->next;

		free(curr);
		curr = next;
	}
}
