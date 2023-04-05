#include "main.h"
/**
 *  _print_rev_recursion -printf a string in reverse.
 * @s: The staring to be printed.
 * Return: Always 0 (sucess)
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	else
	{
		_print_rev_recursion(s+1);
		_putchar(*s);
	}
}
