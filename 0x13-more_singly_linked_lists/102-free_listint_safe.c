#include "lists.h"

/**
 * find_listint_loop - the write function
 * @head: input
 * Return: addition of the node where the loop start.
 * or NULL if there is no loop function.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	int j;
	listint_t *temp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		j = *h - (*h)->next;
		if (j > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			len++;
		}
		else
		{
			free(*h);
			*h = NULL;
			len++;
			break;
		}
	}
	*h = NULL;

	return (len);
}
