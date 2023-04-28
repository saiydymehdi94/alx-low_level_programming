#include <stdio.h>

void print_fun(void)__attribute__((constructor));
/**
 * printf_fun _function
 * function exucuted
 */

void print_fun(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
