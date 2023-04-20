#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all -print the sum of all its parameters.
 * @n: number of parameter passed to the function
 * @...: a variable of parametre to calculate the sum of.
 *
 * Return: if n == 0 - 0
 *
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ar;
	unsigned int j;
	unsigned int sm = 0;

	va_start(ar, n);

	for (j = 0; j < n; j++)
	{
		sm += va_arg(ar, int);
	}

	va_end(ar);

	return (sm);
}
