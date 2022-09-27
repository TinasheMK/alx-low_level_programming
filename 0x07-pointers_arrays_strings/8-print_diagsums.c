
#include <stdio.h>
/**
 * print_diagsums - main
 * @a: int
 * @size: size
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i;
	int j;
	
	int d1 = 0;
	int d2 = 0;
	for (i = 0; i < size; i++)
	{

		{
			d1 += *(a + (size * i + i));
			d2 += *(a + (size * i  - 1 - 1 ));
		}
	}
	printf("%d,", d1);	
	printf("%d\n", d2);
}
