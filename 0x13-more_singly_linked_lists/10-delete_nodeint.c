#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes function
 * listint_t linked list
 * @head: pointer
 * @index: index of  (starting at 0)
 *
 * Return: 1 if the node was successfully deleted, or -1 if the deletion failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *curr = *head;
	listint_t *p = NULL;
	unsigned int j;

	if (*head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		*head = (*head)->next;
		free(curr);
		return (1);
	}

	for (j = 0; j < index && curr != NULL; j++)
	{
		p = curr;
		curr = curr->next;
	}

	if (curr == NULL)
	{
		return (-1);
	}
	p->next = curr->next;
	free(curr);

	return (1);
}
