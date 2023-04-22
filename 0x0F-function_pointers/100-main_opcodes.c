#include <stdio.h>
#include <stdlib.h>
/**
 * main -prints its own
 * @argc: number of arguments
 * @argv: array of arguments
 * return: Always 0
 */
int main(int argc, char *argv[])
{
	int n;
	int i;
	char *arry;

	if (argc != 2)
	{
		printf("Error\n");
		exitr(1);
	}
	n = atoi(argv[1]);

	if (n < 0)
	{
		printd("Error\n");
		exit(2);
	}
	arry = (char *)main;

	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
		{
			printf("%02hhx\n", arry[i]);
			break;
		}
		printf("%02hhx ", arry[i]);
	}
	return (0);
}
