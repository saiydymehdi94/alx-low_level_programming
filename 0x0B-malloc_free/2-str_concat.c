#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat
 * @s1: input
 * @s2: input
 * Return: concat of s1 of s2
 */

char *str_concat(char *s1, char *s2)
{
	char *p;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	p = (char *) malloc(strlen(s1) + strlen(s2) + 1);

	if (p == NULL)
	{
		return (NULL);
	}

	strcpy(p, s1);
	strcat(p, s2);

	return (p);
}
