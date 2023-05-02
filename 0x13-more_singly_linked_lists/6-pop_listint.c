#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * pop_listint - Deletes the head node of  a listint_t linked list
 * @head: the pointer
 *
 * REturn: the head node s data (n), or O if the list is empty.
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (*head == NULL)
		return (0);

	temp = *head;
	n = temp->n;
	*head = temp->next;
	free(temp);

	return (n);
}
