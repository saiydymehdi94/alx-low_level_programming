#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end -add function
 * @head: pointer
 * @n: interger
 *
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *p;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;

	/* new node as the head */
	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		p = *head;
		while (p->next != NULL)
		{
			p = p->next;
		}

		p->next = new_node;
	}
	return (new_node);
}
