#include <stdio.h>
#include "main.h"

/**
* print_diagsums - sum of the two diagonals
* @a: array
* @size: size
*/
void print_diagsums(int *a, int size)
{
	int n;
	int sm1 = 0;
	int sm2 = 0;

	for (n = 0; n < size; n++)
	{
		sm1 = sm1 + a[n * size + n];
	}

	for (n = size - 1; n >= 0; n--)
	{
		sm2 += a[n * size + (size - n - 1)];
	}

	printf("%d, %d\n", sm1, sm2);
}
