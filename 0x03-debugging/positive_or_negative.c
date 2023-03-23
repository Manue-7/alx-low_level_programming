#include "main.h"
/**
 * positive_or_negative - checks if a number is positive or negative
 *
 * @i: number to be checked
 *
 * Return Always 0
 */
void positive_or_negative(int i)
{
	if (i < 0)
	{
		printf("%d is negative", i);
	}
	else if (i > 0)
	{
		printf("%d is positive", i);
	}
}
