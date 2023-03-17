#include <stdio.h>

/**
 * main - prints the size of various types
 * Return: 0 if exited properly, non-zero if otherwise
*/
int main(void)
{
	printf("Size of a char: %ld\n", sizeof(char));
	printf("Size of an int: %ld\n", sizeof(int));
	printf("Size of a long int: %ld\n", sizeof(long int));
	printf("Size of a long long int: %ld\n", sizeof(long long int));
	printf("Size of a float: %ld\n", sizeof(float));
	return (0);
}
