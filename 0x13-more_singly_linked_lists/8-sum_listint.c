#include "lists.h"

/**
 * sum_listint -calculates function
 * @head: pointer
 *
 * Return: the sum of all
 */
int sum_listint(listint_t *head)
{
	int s = 0;

	while (head)
	{
		s += head->n;
		head = head->next;
	}

	return (s);
}
