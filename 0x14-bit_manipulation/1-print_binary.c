#include <stdio.h>
#include "main.h"

/**
 * print_binary -prints function
 * @n: number
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	putchar((n & 1));
}
