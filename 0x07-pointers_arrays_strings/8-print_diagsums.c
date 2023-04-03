#include <stdio.h>
#include "main.h"

/**
* print_diagsums - sum of the two diagonals
* @a: array
* @size: size
*/
void print_diagsums(int *a, int size)
{
	int i;
	int x = 0;
	int y = 0;

	for (i = 0; i < size; i++)
	{
		x = x + a[i * size + i];
	}

	for (i = size -1; i >= 0; i--)
	{
		y += a[i * size + (size -i -1)];
	}

	printf("%d, %d\n", x,y);
}
