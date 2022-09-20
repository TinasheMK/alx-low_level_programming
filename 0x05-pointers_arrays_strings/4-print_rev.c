#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * print_rev - print in reverse
 * @s: string to print
 *
 * Return: void
 */
void print_rev(char *s)
{
	int i = strlen(s);

	while (i > 0)
	{
		i--;
		putchar(s[i]);
	}
	putchar('\n');
}
