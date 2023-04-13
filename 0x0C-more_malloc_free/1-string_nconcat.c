#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * string_nconcat -concatenates n bytes a string to another string.
 * @s1: string to append to
 * @s2: string to concatenates from
 * @n: number of bytes
 * Retuen: pointer to resulting string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len_s1, len_s2;
	char *m;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}
	len_s1 = strlen(s1);
	len_s2 = strlen(s2);

	if (n >= len_s2)
	{
		n = len_s2;
	}
	m = malloc(len_s1 + n + 1);

	if (m == NULL)
	{
		return (NULL);
	}
	memcpy(m, s1, len_s1);
	memcpy(m + len_s1, s2, n);
	m[len_s1 + n] = '\0';
	return (m);
}
