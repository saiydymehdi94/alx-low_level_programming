#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add -Return the sum of two number.
 * @a: first number
 * @b: seconde number
 *
 * Return: the sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub -the return difference of two number
 * @a: first number
 * @b: seconde number
 *
 * Return: returns the difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul -the product of two number
 * @a: first number
 * @b: second number
 *
 * Return: The product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - the division of two number
 * @a: first number
 * @b: second number
 *
 * Return:  the result of the division of a by b
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod -remainder of the division of two number
 * @a: first number
 * @b: second number
 *
 * Return: the remainder of the division of a by b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
