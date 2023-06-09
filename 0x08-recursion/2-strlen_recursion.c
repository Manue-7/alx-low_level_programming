#include "main.h"

/**
 * _strlen_recursion - prints length of a string
 * @s: string length to be printed
 *
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
