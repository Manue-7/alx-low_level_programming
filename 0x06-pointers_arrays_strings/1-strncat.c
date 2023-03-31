#include "main.h"

/**
 * _strncat - concatenates n bytes from string to another
 * @dest: destination
 * @src: source string
 * @n: num of bytes of string
 *
 * Return: pointer resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
