#include "lists.h"
#include <stdlib.h>

/**
 * *get_nodeint_at_index -Returns the node of listint_t linked list.
 * @head: pointer
 * @index: index of the node
 *
 * Return: Pointer to node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *curr = head;

	while (curr != NULL && i < index)

	{
		curr = curr->next;
		i++;
	}

	return (curr);
}
