#include "main.h"

/**
 * _pow_recursion - prints the power of a value
 * @x: base value
 * @y: power value
 *
 * Return: x to power of y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (0);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
