#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name -print name
 * @name: string
 * @f: pointers
 * return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == 0)
		return;
	else if (f == NULL)
		return;
	f(name);
}
