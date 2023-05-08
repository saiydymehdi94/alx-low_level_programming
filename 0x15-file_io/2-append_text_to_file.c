#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * append_text_to_file - appends text function
 * @filename: the name
 * @text_content: the text
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	FILE *fp;

	if (filename == NULL)
	{
		return (-1);
	}
	fp = fopen(filename, "a");
	if (fp == NULL)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		fputs(text_content, fp);
	}
	fclose(fp);
	return (1);
}
