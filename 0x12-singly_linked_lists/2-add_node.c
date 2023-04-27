#include "list.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node -function that adds a new node at the beginning
 * @hear double pointer
 * @str: string
 *
 * Return:the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *n_node;
	unsigned int j = 0;

	while (str[j])
		j++;
	n_node = malloc(sizeof(list_t));
	if (n_node == NULL)
		return (NULL);
	n_node->str = strup(str);
	n_node->len = j;
	n_node->next = (*head);
	(*head) = n_node;
	return (*head);
}
