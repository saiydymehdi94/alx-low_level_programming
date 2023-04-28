#include <stdio.h>

void printIntroduction(void)__attribute__((constructor));
/**
 * printf_fun -function
 * function exucuted
 */

void printIntroduction(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
