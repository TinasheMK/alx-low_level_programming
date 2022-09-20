#include "main.h"

/**
 * _puts - to print a string
 * @str: the stringing
 * Return: void
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
