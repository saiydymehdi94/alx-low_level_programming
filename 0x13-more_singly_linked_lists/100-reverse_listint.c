#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * reverse_listint - Reverses afunction.
 *
 * @head: Pointer
 *
 * Return: Pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *p = NULL, *curr = *head, *next;

	while (curr != NULL)
	{
		next = curr->next;
		curr->next = p;
		p = curr;
		curr = next;
	}

	*head = p;
	return (*head);
}
