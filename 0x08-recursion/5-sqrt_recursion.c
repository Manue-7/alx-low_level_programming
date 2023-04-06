#include "main.h"

/**
 * _sqrt_recursion - prints natural square root of a num
 * @n: num to root
 *
 * Return: natural root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (actual_sqrt_recursion(n, 0));
}
/**
 * actual_sqrt_recursion - recurses to find sqrt of num
 * @n: num to root
 * @i: iterator
 *
 * Return: result
 */
int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}

	if (i * i == n)
	{
		return (i);
	}

	return (actual_sqrt_recursion(n, i + 1));
}
