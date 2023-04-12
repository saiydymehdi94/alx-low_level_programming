#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * argstostr -print concatenates all the arguments of your program.
 * @ac: int input
 * @av: double pointer array
 * Return: Always 0
 */

char *argstostr(int ac, char **av)
{
	int u, v, len = 0, p = 0;
	char *str;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (u = 0; u < ac; u++)
	{
		for (v = 0; av[u][v]; v++)
		{
			len++;
		}
	}
	len += ac;

	str = malloc(sizeof(char) * len + 1);

	if (str == NULL)
	{
		return (NULL);
	}

	for (u = 0; u < ac; u++)
	{
		for (v = 0; av[u][v]; v++)
		{
			str[p] = av[u][v];
			p++;
		}
		if (str[p] == '\0')
		{
			str[p++] = '\n';
		}
	}
	return (str);
}
