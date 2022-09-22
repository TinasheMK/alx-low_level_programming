#include "main.h"
/**
 * reverse_array - reverses an array
 * @*a: array to reverse
 * @n: number of characters
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i;
	int j;
	int m[n] = *a;

	i = n;
	j = 0;
	while (i != 0)
	{
		a[j] = m[i];
		j++;
		i--;
	}
}
