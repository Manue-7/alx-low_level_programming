#include "main.h"

/**
 * main - This program prints the 
*print_alphabet - alphabet 10 times in order and adds a next line
*Return - always 0 (Success)
*/

void print_alphabet_x10(void)
{
	char alpha;
	int i;
	i = 0;
	while (i < 10)
	{
		alpha = 'a';
	while (alpha <= 'z')
		{
		_putchar (alpha);
		alpha++;
		}
		_putchar ('\n');
		i++;
	}
}
