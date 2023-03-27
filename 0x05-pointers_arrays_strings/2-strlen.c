#include "main.h"

/**
 * _strlen - returns legnth of a string
 *
 * @s: string to check
 *
 * Return: The legnth of string.
 */
int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
