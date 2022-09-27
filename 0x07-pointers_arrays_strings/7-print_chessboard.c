#include "main.h"
#include <stdio.h>
/**
 * print_chessboard - main
 * @a: pointer
 *
 * Return: chessboard
 */
void print_chessboard(char (*a)[8])
{
	int i;
	int j;

	i = 0;
	while (i < 8)
	{
		for (j = 0; j < 8; j++)
		{
			putchar(a[i][j]);
		}
		putchar('\n');
		i++;
	}
}
