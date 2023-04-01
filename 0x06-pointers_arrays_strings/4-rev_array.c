#include "main.h"

/**
 * reverse_array - reverses array of interger
 * @a: array to reverse
 * @n: number of elements in array
 */
void reverse_array(int *a, int n)
{
	int i, j, tmp;

	j = n - 1;

	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j--] = tmp;
	}
}
