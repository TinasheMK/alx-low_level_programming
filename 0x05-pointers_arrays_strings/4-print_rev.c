#include "main.h"
/**
 * print_rev - print in reverse
 * @s: string to print
 *
 * Return: void
 */
void print_rev(char *s)
{
	int i = strlen(*s);

	while (i > 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
