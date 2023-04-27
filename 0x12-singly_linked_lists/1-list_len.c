#include "lists.h"

/**
 * list_len -function that returns the number of elements
 * @h: pointer
 *
 *
 * Return: the numb of elements in list
 */

size_t list_len(const list_t *h)
{
	size_t lenn = 0;

	while (h != NULL)
	{
		lenn++;
		h = h->next;
	}
	return (lenn);
}
