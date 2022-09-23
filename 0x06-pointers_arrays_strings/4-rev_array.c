#include "main.h"
/**
 * reverse_array - reverses an array
 * @a: array to reverse
 * @n: number of characters
 
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i;
	int j;
	int m;

	i = n-1;
	j = 0;
	while (i != 0)
	{
		m = a[j];
		a[j] = a[i];
		a[i] = m;
		j++;
		i--;
	}
}
