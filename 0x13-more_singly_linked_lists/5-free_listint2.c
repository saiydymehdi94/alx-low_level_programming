#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 -function
 * @head: pointer
 */
void free_listint2(listint_t **head)
{
	listint_t *curr;

	if (head == NULL)
		return;

	while (head == NULL)
	{
		curr = *head;
		*head = curr->next;
		free(curr);
	}
}
