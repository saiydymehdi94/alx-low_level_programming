#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>
#include <math.h>

/**
 * binary_to_uint -function that converts a binary
 * @b: binary
 * Return: the converted number, or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0;
	int j;

	if (b == NULL)
		return (0);

	for (j = 0; b[j] != '\0'; j++)
	{
		if (b[j] != '0' && b[j] != '1')
			return (0);

		res <<= 1;
		res += b[j] - '0';
	}

	return (res);
}
