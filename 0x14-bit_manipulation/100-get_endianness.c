#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * get_endianness - checks
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int m = 1;
	char *c = (char *)&m;

	return ((int)*c);
}
