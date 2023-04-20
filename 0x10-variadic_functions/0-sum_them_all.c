#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all -Returns that returns the sum of all its parameters.
 * @n: The number of parameters passed to the function.
 *
 * Return: if n == 0 - 0.
 * Otherwise -the sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	unsigned int sm = 0;
	va_list ar;

	va_start(ar, n);

	for (i = 0; i < n; i++)
	{
		sm += va_arg(ar, int);
	}
	va_end(ar);
	return (sm);
}
