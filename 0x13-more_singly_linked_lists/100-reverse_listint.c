#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * reverse_listint -Reverser a listint_t linked list
 * @head: pointer
 * Return: pointer to the first node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *p = NULL;
	listint_t *curr = *head;

	while (curr != NULL)
	{
		listint_t *next = curr->next;
		curr->next = p;
		p = curr;
		curr = next;
	}

	*head = p;
	return (p);
}
