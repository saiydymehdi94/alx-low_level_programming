#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 -function
 * @head: pointer
 */
void free_listint2(listint_t **head)
{
	listint_t *curr, *p;

	curr = *head;
	while (curr != NULL)
	{
		p = curr;
		curr = curr->next;

		free(p);
	}
	*head = NULL;
}
