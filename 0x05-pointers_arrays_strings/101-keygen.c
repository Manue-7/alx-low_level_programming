#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates a random valid password for 101-crackme
 *
 * Return: Always 0
 */

int main(void)
{
	char password[100];
	int i, sum, diff;

	srand(time(NULL));

	for (i = 0, sum = 0; i < 100; i++)
	{
		password[i] = rand() % 78;
		sum += (password[i] + '0');
		putchar(password[i] + '0');
		if ((2772 - sum) - '0' < 78)
		{
			diff = 2772 - sum - '0';
			sum += diff;
			putchar(diff + '0');
			break;
		}
	}
	return (0);
}
