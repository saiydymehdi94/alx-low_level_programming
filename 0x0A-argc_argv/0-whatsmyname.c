#include <stdio.h>

/**
 * @argc: argument counter.
 * @argv: pointer
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
}
