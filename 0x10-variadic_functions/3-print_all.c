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
	char c;
	char *s;
	float f;

	va_list ar;

	va_start(ar, format);

	while (format[i] != '\0')
	{
		if (format[i] == 'c')
		{
			c = (char)va_arg(ar, int);
			printf("%c", c);
		}
		else if (format[i] == 'i')
		{
			i = va_arg(ar, int);
			printf("%d", i);
		}
		else if (format[i] == 'f')
		{
			f = (float)va_arg(ar, double);
			printf("%f", f);
		}
		else if (format[i] == 's')
		{
			s = va_arg(ar, char*);
			if (s == NULL)
			{
				printf("(nil)");
			}
			else
			{
				printf("%s", s);
			}
		}
		i++;
	}
	printf("\n");
	va_end(ar);
}
