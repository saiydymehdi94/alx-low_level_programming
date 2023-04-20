#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all -print the sum of all its parameters.
 * @n: number
 * @...: the integer to sum
 * Return: Always 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list a;
	unsigned int s = 0;
	unsigned int j;

	va_start(a, n);

	for (j = 0; j < n; j++)
	{
		s += va_arg(a, int);
	}

	 va_end(a);

	 return (s);
}
