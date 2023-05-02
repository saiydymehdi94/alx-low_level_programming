#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: pointer
 *
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
    const listint_t *current = head, *prev = NULL;
    size_t count = 0;

    while (current != NULL)
    {
        printf("[%p] %d\n", (void *)current, current->n);
        count++;

        if (current < current->next && prev != NULL && prev < current)
        {
            printf("-> [%p] %d\n", (void *)current->next, current->next->n);
            current = current->next;
        }
        else
        {
            current = current->next;
            prev = current;
        }
    }

    return (count);
}
