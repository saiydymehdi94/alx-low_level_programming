#include <stdio.h>
#include "main.h"

/**
* print_diagsums - sum of the two diagonals
* @a: array
* @size: size
*/
void print_diagsums(int *a, int size)
{
	int x = 0;
	int y = 0;
	int i = 0;

	while (i < size)
	{
		x += a[i * (size + 1)];
		y += a[(i + 1) * (size -1)];
		i++;
	}
	printf("%d, ", x);
	printf("%d", y);
	printf("\n");
}
