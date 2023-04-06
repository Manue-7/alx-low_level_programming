#include "main.h"

/**
 * is_prime_number - prints 1 for prime num if else 0
 * @n: input num
 *
 * Return: 1 if prime snd 0 if else
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - calculates if num is prime
 * @n: num to check
 * @i: iterator
 *
 * Return: 1 if n is prime 0 if else
 */
int actual_prime(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	if (n % i == 0 && i > 0)
	{
		return (0);
	}
	return (actual_prime(n, i - 1));
}
