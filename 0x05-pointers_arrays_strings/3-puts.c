#include "main.h"
#include <stdio.h>
/**
 * print_rev - print in reverse
 * @str: string to print
 *
 * Return: void
 */
void _puts (char *str)
{
	int i = 0;
	while (i <  strlen(str))
	{
		i++;
		putchar(str[i]);
	}
	putchar('\n');
}
