#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint_safe -prints function
 * @head: pointer
 *
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *curr = head, *p = NULL;
	size_t count = 0;

	while (curr != NULL)
	{
		printf("[%p] %d\n", (void *)curr, curr->n);
		count++;

		if (curr < curr->next && p != NULL && p < curr)
		{
			printf("-> [%p] %d\n", (void *)curr->next, curr->next->n);
			curr = curr->next;
		}
		else
		{
			curr = curr->next;
			p = curr;
		}
	}

	return (count);
}
