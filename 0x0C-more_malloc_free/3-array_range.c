#include <stdlib.h>
#include "main.h"

/**
 * array_range -creates an array of integers
 * @min: minimun range of values stored
 * @max: maximun range of values and number
 * Return: pointer
 */

int *array_range(int min, int max)
{
	int a;
	int *ar;

	if (min > max)
	{
		return (NULL);
	}
	ar = malloc((max - min  + 1) * sizeof(int));

	if (ar == NULL)
	{
		return (NULL);
	}

	for (a = 0; a <= max - min; a++)
	{
		ar[a] = min + a;
	}

	return (ar);
}
