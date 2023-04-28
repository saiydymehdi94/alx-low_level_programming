#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end -function
 * @head: pointer
 * @str: string
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *nw_node;
	list_t *tp = *head;
	unsigned int j = 0;

	while (str[j])
		j++;

	nw_node = malloc(sizeof(list_t));
	if (nw_node == NULL)
		return (NULL);

	nw_node->str = strdup(str);
	nw_node->len = j;
	if (nw_node->str == NULL)
	{
		free(nw_node);
		return (NULL);
	}

	nw_node->next = NULL;

	if (*head == NULL)
	{
		*head = nw_node;
		return (nw_node);
	}
	while (tp->next)
		tp = tp->next;
	tp->next = nw_node;
	return (nw_node);
}
