#include "main.h"

int prime(int n, int c);

/**
 * is_prime_number - says if an integer is a prime number or not.
 * @n: number
 * Return: 1 if n is a prime number, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime(n, n - 1));

}

/**
 * prime -calculates if the number is prime recursively
 * @n: input
 * @s: input
 * Return: 1 or 0
 */
int prime(int n, int s)
{
	if (s == 1)
		return (1);

	else if (n % s == 0 && s > 0)
		return (0);

	return (prime(n, s - 1));
}
