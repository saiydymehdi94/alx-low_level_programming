#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node -function
 * @head: the double pointer
 * @str: the string
 *
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *nw_node;
	unsigned int j = 0;

	while (str[j])
		j++;
	nw_node = malloc(sizeof(list_t));
	if (nw_node == NULL)
		return (NULL);
	nw_node->str = strdup(str);
	nw_node->len = j;
	nw_node->next = (*head);
	(*head) = nw_node;
	return (*head);
}
