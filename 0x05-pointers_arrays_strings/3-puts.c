#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * _puts - print in reverse
 * @s: string to print
 *
 * Return: void
 */
void _puts(char *str)
{
	int i = strlen(str);
	int n = 0;
	while (n < i)
	{
		n++;
		putchar(str[i]);
	}
	putchar('\n');
}
