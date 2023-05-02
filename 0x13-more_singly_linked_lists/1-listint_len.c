#include "lists.h"

/**
 * listint_len -function
 * @h: a pointer
 *
 * Return: the number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;
	const listint_t *curr = h;

	while (curr != NULL)
	{
		count++;
		curr = curr->next;
	}

	return (count);
}
