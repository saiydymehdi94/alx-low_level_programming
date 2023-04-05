#include "main.h"
/**
 * _strlen_recursion -Return the length of a staring
 * @s: The staring to be measured.
 *
 * Return: Always 0 or 1 + _strlen_recursion(s+1)
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
