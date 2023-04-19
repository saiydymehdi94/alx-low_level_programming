#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator -prints each elem on new
 * @array: array
 * @size: how many ele to print
 * @action:  pointer to the function you need to use
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x;

	if ( array == NULL)
		return;
	else if (action == NULL)
		return;

	for (x = 0; x < size; x++)
	{
		action(array[x]);
	}
}
