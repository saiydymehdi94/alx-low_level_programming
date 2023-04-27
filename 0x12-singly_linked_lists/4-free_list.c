#include <stdlib.h>
#include "lists.h"

/**
 * free_list -function that frees
 * @head: pointer
 */
void free_list(list_t *head)
{
	list_t *tp;

	while (head)
	{
		tp = head->next;
		free(head->str);
		free(head);
		head = tp;
	}
}
