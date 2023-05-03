#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: pointer
 *
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *h11, *h22;
	size_t nodee = 1;

	if (head == NULL || head->next == NULL)
		return (0);
	h11 = head->next;
	h22 = head->next->next;

	while (h22)
	{
		if (h11 == h22)
		{
			h11 = head;
			while (h11 != h22)
			{
				nodee++;
				h11 = h11->next;
				h22 = h22->next;
			}
			h11 = h11->next;
			while (h11 != h22)
			{
				nodee++;
				h11 = h11->next;
			}
			return (nodee);
		}
		h11 = h11->next;
		h22 = h22->next->next;
	}
	return (0);
}
