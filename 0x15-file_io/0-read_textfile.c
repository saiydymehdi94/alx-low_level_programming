#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * read_textfile -reads a text
 * @filename: name
 * @letters: number
 *
 * Return: the actual number
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *file;
	char *buf;
	ssize_t a;
	ssize_t b;

	if (filename == NULL)
	{
		return (0);
	}
	file = fopen(filename, "r");
	if (file == NULL)
	{
		return (0);
	}
	buf = malloc(letters);
	if (buf == NULL)
	{
		fclose(file);
		return (0);
	}
	a = fread(buf, sizeof(char), letters, file);
	if (a < 0)
	{
		fclose(file);
		free(buf);
		return (0);
	}
	b = write(STDOUT_FILENO, buf, a);
	if (b < 0 || b != a)
	{
		fclose(file);
		free(buf);
		return (0);
	}
	fclose(file);
	free(buf);
	return (a);
}
