#include "main.h"

/**
 * _strlen_recursion -Return the length of a staring
 * @s: char
 * 
 * Return: Always NULL or 1+ _strlen_recursion(s+1)
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
