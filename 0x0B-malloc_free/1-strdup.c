#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _strdup -duplication to new memory space location.
 * @str: char
 * Return: Always 0
 */

char *_strdup(char *str)
{
	char *r;

	if (str == NULL)
	{
		return (NULL);
	}

	r = malloc(strlen(str) + 1);
	if (r != NULL)
	{
		strcpy(r, str);
	}
	return (r);

}
