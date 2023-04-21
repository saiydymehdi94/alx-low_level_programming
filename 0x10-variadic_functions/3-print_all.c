#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all -prints anything
 * @format: list of types of arguments passed
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *x, *y = "";

	va_list ar;

	va_start(ar, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", y, va_arg(ar, int));
					break;
				case 'i':
					printf("%s%d", y, va_arg(ar, int));
					break;
				case 'f':
					printf("%s%f", y, va_arg(ar, double));
					break;
				case 's':
					x = va_arg(ar, char *);
					if (!x)
						x = "(nil)";
					printf("%s%s", y, x);
					break;
				default:
					i++;
					continue;
			}
			y = ", ";
			i++;
		}
	}

	printf("\n");
	va_end(ar);
}
