#include "main.h"

/**
 * _puts - prints a string to stdout
 *
 * @str: pointer to string
 *
 * Return: nil.
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar (str[i]);
	}
	_putchar ('\n');
}
