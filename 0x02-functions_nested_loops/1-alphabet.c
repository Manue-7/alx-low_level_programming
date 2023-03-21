#include "main.h"
/**
 * void -Entry point
 * Program that prints the alphabet
 */
void print_alphabet(void)
{
	char alpha;
	alpha='a';
	while(alpha<='z')
	{
		_putchar(alpha);
		alpha++;
	}
	_putchar('\n');
}
