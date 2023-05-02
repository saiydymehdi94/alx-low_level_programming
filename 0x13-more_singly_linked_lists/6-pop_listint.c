#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * pop_listint -function that deletes the head node of a listint_t
 * @head: pointer
 * Retun: the head node s data (n), or if the linked list is empty
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
