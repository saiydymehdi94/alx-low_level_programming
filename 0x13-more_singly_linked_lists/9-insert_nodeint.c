#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserts fuction
 * @head: pointer
 * @idx: index , starting from 0
 * @n: value of the new node
 *
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *curr_node;
	unsigned int j;

	if (head == NULL)
		return (NULL);

	if (idx == 0)
	{
		new_node = malloc(sizeof(listint_t));
		if (new_node == NULL)
			return (NULL);
		new_node->n = n;
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	curr_node = *head;

	for (j = 0; j < idx - 1; j++)
	{
		if (curr_node == NULL)
			return (NULL);
		curr_node = curr_node->next;
	}

	if (curr_node == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = curr_node->next;
	curr_node->next = new_node;

	return (new_node);
}
