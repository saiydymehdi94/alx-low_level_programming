#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main -print a of 2 numbre.
 * @argc: number
 * @argv: array
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int a;

	if (argc == 3)
	{
		a = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", a);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
