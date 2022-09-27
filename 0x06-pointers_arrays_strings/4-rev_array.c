#include "main.h"
/**
<<<<<<< HEAD
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
=======
 * reverse_array - this function concatnates two strings
 *
 * @a: to reverse
 * @n: bytes
 */
void reverse_array(int *a, int n)
{
	int charAc;
	int j = 0;
	int i = n - 1;

	while (j <= i)
	{
		charAc = a[j];
		a[j] = a[i];
		a[i] = charAc;
>>>>>>> 4192a3aff7b9fd1a1c908d14f6baef42c3cfe1b6
		i--;
		j++;
	}
}
