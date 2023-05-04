#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * clear_bit - sets
 * @n: pointer
 * @index: index
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n &= ~(1ul << index);
	return (1);
}
