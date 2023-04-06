#include "main.h"

/**
 * factorial - prints factorial of given num
 * @n: given num
 * Return: Answer of factorial
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 1)
	{
		return (1);
	}
	else
		return (n * factorial(n - 1));
}
