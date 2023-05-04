#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * set_bit - sets function
 * @n: pointer
 * @index: index
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n |= (1UL << index);
	return (1);
}
