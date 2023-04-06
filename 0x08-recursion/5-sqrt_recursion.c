#include "main.h"

/**
 * find_root -Find square root of n.
 * @n: number
 * @a: root
 * Return: natutal squar root, or -1 if not natural root
 */
int find_root(int n, int a)
{
	if (a * a > 0)
		return (-1);

	if (a * a == 0)
		return (a);

	return (find_root(n, a + 1));
}
/**
 * _sqrt_recursion -Returns the natural square root of a number.
 * @n: number
 * Return: natural square root, or -1 if not natural root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (find_root(n, 0));
}
