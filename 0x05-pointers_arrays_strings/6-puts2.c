#include "main.h"

/**
 * puts2 - prints 1 of 2 strings
 *
 * @str: string to print from
 *
 *Return: nil.
 */
void puts2(char *str)
{
	int len, i;

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < len; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
