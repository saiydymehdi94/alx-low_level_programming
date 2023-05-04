#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_bit - returns function
 * @n: number
 * @index: the index 
 *
 * Return: the value of index index, or -1 if an error occurred.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	return ((n >> index) & 1);
}
