#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function given
 * @array: array
 * @size: is the size of the array
 * @action:  pointer to the function you need to use
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x;

	for (x = 0; x < size; x++)
	{
		action(array[x]);
	}
}
