#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings -print strings, followed by a new line.
 * @separator: the string to be printed
 * @n: number
 * @...: a variable number
 * Description: if separator is NULL
 * If one of the string is NULL, print (nil) instead
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list su;
	char *c;
	unsigned int j;

	va_start(su, n);

	for (j = 0; j < n; j++)
	{
		c = va_arg(su, char *);
		if (c == NULL)
			printf("(nil)");
		else
			printf("%s", c);
		if (j != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(su);
}
