#include <stdio.h>
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers -print number, followed by new line.
 * @separator: The string to be printed
 * @n: number
 * @...: avariable number
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list x;
	unsigned int y;

	va_start(x, n);

	for (y = 0; y < n; y++)
	{
		unsigned int s = va_arg(x, int);

		printf("%d", s);
		if (y != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(x);
}
