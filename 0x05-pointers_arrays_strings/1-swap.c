#include "main.h"

/**
 * swap_int - swaps the values between 2 intergers
 *
 * @a: pointer to first value
 * @b: pointer to second value
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	*a = *b;
	*b = *a;
}
