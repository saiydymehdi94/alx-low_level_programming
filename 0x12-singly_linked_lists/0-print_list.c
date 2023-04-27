#include "lists.h"
#include <stdio.h>

/**
 * print_list -the function
 * @h: pointer
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t w = 0;
	while (h != NULL)
	{
		if (h-> str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		w++;
		h = h->next;
	}
	return (w);
}
